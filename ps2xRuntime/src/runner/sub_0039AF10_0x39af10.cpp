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

// Function: sub_0039AF10
// Address: 0x39af10 - 0x39b3f8
void sub_0039AF10_0x39af10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039AF10_0x39af10");
#endif

    switch (ctx->pc) {
        case 0x39af48u: goto label_39af48;
        case 0x39afc8u: goto label_39afc8;
        case 0x39aff4u: goto label_39aff4;
        case 0x39b030u: goto label_39b030;
        case 0x39b054u: goto label_39b054;
        case 0x39b07cu: goto label_39b07c;
        case 0x39b0a8u: goto label_39b0a8;
        case 0x39b0c0u: goto label_39b0c0;
        case 0x39b108u: goto label_39b108;
        case 0x39b110u: goto label_39b110;
        case 0x39b150u: goto label_39b150;
        case 0x39b164u: goto label_39b164;
        case 0x39b16cu: goto label_39b16c;
        case 0x39b1a8u: goto label_39b1a8;
        case 0x39b1d4u: goto label_39b1d4;
        case 0x39b1ecu: goto label_39b1ec;
        case 0x39b200u: goto label_39b200;
        case 0x39b21cu: goto label_39b21c;
        case 0x39b23cu: goto label_39b23c;
        case 0x39b268u: goto label_39b268;
        case 0x39b274u: goto label_39b274;
        case 0x39b280u: goto label_39b280;
        case 0x39b294u: goto label_39b294;
        case 0x39b2a8u: goto label_39b2a8;
        case 0x39b2c4u: goto label_39b2c4;
        case 0x39b2e4u: goto label_39b2e4;
        case 0x39b310u: goto label_39b310;
        case 0x39b31cu: goto label_39b31c;
        case 0x39b334u: goto label_39b334;
        case 0x39b360u: goto label_39b360;
        case 0x39b39cu: goto label_39b39c;
        case 0x39b3b8u: goto label_39b3b8;
        case 0x39b3c8u: goto label_39b3c8;
        case 0x39b3d4u: goto label_39b3d4;
        case 0x39b3e0u: goto label_39b3e0;
        default: break;
    }

    ctx->pc = 0x39af10u;

    // 0x39af10: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x39af10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x39af14: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x39af14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x39af18: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x39af18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x39af1c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x39af1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x39af20: 0x90830821  lbu         $v1, 0x821($a0)
    ctx->pc = 0x39af20u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2081)));
    // 0x39af24: 0x10620042  beq         $v1, $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x39AF24u;
    {
        const bool branch_taken_0x39af24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x39AF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39AF24u;
        // 0x39af28: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39af24) {
            ctx->pc = 0x39B030u;
            goto label_39b030;
        }
    }
    ctx->pc = 0x39AF2Cu;
    // 0x39af2c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x39AF2Cu;
    {
        const bool branch_taken_0x39af2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x39af2c) {
            ctx->pc = 0x39AF40u;
            goto label_39af40;
        }
    }
    ctx->pc = 0x39AF34u;
    // 0x39af34: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x39AF34u;
    {
        const bool branch_taken_0x39af34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x39af34) {
            ctx->pc = 0x39B080u;
            goto label_39b080;
        }
    }
    ctx->pc = 0x39AF3Cu;
    // 0x39af3c: 0x0  nop
    ctx->pc = 0x39af3cu;
    // NOP
label_39af40:
    // 0x39af40: 0xc0e6924  jal         func_39A490
    ctx->pc = 0x39AF40u;
    SET_GPR_U32(ctx, 31, 0x39AF48u);
    ctx->pc = 0x39AF44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39AF40u;
    // 0x39af44: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39A490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39A490u, 0x39AF40u, 0x39AF48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39AF48u;
label_39af48:
    // 0x39af48: 0xa60000c0  sh          $zero, 0xC0($s0)
    ctx->pc = 0x39af48u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 192), (uint16_t)GPR_U32(ctx, 0));
    // 0x39af4c: 0x3c024380  lui         $v0, 0x4380
    ctx->pc = 0x39af4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17280 << 16));
    // 0x39af50: 0xa6002b4c  sh          $zero, 0x2B4C($s0)
    ctx->pc = 0x39af50u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11084), (uint16_t)GPR_U32(ctx, 0));
    // 0x39af54: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x39af54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x39af58: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x39af58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x39af5c: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x39af5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x39af60: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x39af60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x39af64: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x39af64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x39af68: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x39af68u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x39af6c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x39af6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x39af70: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x39af70u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x39af74: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x39af74u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x39af78: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x39af78u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x39af7c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x39AF7Cu;
    {
        const bool branch_taken_0x39af7c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x39af7c) {
            ctx->pc = 0x39AF94u;
            goto label_39af94;
        }
    }
    ctx->pc = 0x39AF84u;
    // 0x39af84: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x39af84u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x39af88: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x39af88u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x39af8c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x39AF8Cu;
    {
        const bool branch_taken_0x39af8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39AF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39AF8Cu;
        // 0x39af90: 0xa6032b4e  sh          $v1, 0x2B4E($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 11086), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39af8c) {
            ctx->pc = 0x39AFB0u;
            goto label_39afb0;
        }
    }
    ctx->pc = 0x39AF94u;
label_39af94:
    // 0x39af94: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x39af94u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x39af98: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x39af98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x39af9c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x39af9cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x39afa0: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x39afa0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x39afa4: 0x0  nop
    ctx->pc = 0x39afa4u;
    // NOP
    // 0x39afa8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x39afa8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x39afac: 0xa6032b4e  sh          $v1, 0x2B4E($s0)
    ctx->pc = 0x39afacu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11086), (uint16_t)GPR_U32(ctx, 3));
label_39afb0:
    // 0x39afb0: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x39afb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x39afb4: 0x78225c10  lq          $v0, 0x5C10($at)
    ctx->pc = 0x39afb4u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x665C10u));
    // 0x39afb8: 0x7e0200a0  sq          $v0, 0xA0($s0)
    ctx->pc = 0x39afb8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 160), GPR_VEC(ctx, 2));
    // 0x39afbc: 0x860500c2  lh          $a1, 0xC2($s0)
    ctx->pc = 0x39afbcu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 194)));
    // 0x39afc0: 0xc096e34  jal         func_25B8D0
    ctx->pc = 0x39AFC0u;
    SET_GPR_U32(ctx, 31, 0x39AFC8u);
    ctx->pc = 0x39AFC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39AFC0u;
    // 0x39afc4: 0x26040090  addiu       $a0, $s0, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B8D0u, 0x39AFC0u, 0x39AFC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39AFC8u;
label_39afc8:
    // 0x39afc8: 0x92022b24  lbu         $v0, 0x2B24($s0)
    ctx->pc = 0x39afc8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11044)));
    // 0x39afcc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x39AFCCu;
    {
        const bool branch_taken_0x39afcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39AFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39AFCCu;
        // 0x39afd0: 0x3c02447a  lui         $v0, 0x447A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39afcc) {
            ctx->pc = 0x39AFE4u;
            goto label_39afe4;
        }
    }
    ctx->pc = 0x39AFD4u;
    // 0x39afd4: 0x3c02442f  lui         $v0, 0x442F
    ctx->pc = 0x39afd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17455 << 16));
    // 0x39afd8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x39afd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x39afdc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x39AFDCu;
    {
        const bool branch_taken_0x39afdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39AFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39AFDCu;
        // 0x39afe0: 0x26040090  addiu       $a0, $s0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39afdc) {
            ctx->pc = 0x39AFECu;
            goto label_39afec;
        }
    }
    ctx->pc = 0x39AFE4u;
label_39afe4:
    // 0x39afe4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x39afe4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x39afe8: 0x26040090  addiu       $a0, $s0, 0x90
    ctx->pc = 0x39afe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
label_39afec:
    // 0x39afec: 0xc076690  jal         func_1D9A40
    ctx->pc = 0x39AFECu;
    SET_GPR_U32(ctx, 31, 0x39AFF4u);
    ctx->pc = 0x39AFF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39AFECu;
    // 0x39aff0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A40u, 0x39AFECu, 0x39AFF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39AFF4u;
label_39aff4:
    // 0x39aff4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x39aff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x39aff8: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x39aff8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x39affc: 0xa2020821  sb          $v0, 0x821($s0)
    ctx->pc = 0x39affcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 2));
    // 0x39b000: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x39b000u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x39b004: 0x3c022300  lui         $v0, 0x2300
    ctx->pc = 0x39b004u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8960 << 16));
    // 0x39b008: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x39b008u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39b00c: 0x34455502  ori         $a1, $v0, 0x5502
    ctx->pc = 0x39b00cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21762);
    // 0x39b010: 0x26070020  addiu       $a3, $s0, 0x20
    ctx->pc = 0x39b010u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x39b014: 0x92022b25  lbu         $v0, 0x2B25($s0)
    ctx->pc = 0x39b014u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11045)));
    // 0x39b018: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x39b018u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39b01c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x39b01cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39b020: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x39b020u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39b024: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x39b024u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39b028: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x39B028u;
    SET_GPR_U32(ctx, 31, 0x39B030u);
    ctx->pc = 0x39B02Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39B028u;
    // 0x39b02c: 0xffa20000  sd          $v0, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x39B028u, 0x39B030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39B030u;
label_39b030:
    // 0x39b030: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x39b030u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x39b034: 0x34438885  ori         $v1, $v0, 0x8885
    ctx->pc = 0x39b034u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34949);
    // 0x39b038: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x39b038u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x39b03c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x39b03cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x39b040: 0x26050090  addiu       $a1, $s0, 0x90
    ctx->pc = 0x39b040u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x39b044: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x39b044u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x39b048: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x39b048u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x39b04c: 0xc07681c  jal         func_1DA070
    ctx->pc = 0x39B04Cu;
    SET_GPR_U32(ctx, 31, 0x39B054u);
    ctx->pc = 0x39B050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39B04Cu;
    // 0x39b050: 0x260600a0  addiu       $a2, $s0, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA070u, 0x39B04Cu, 0x39B054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39B054u;
label_39b054:
    // 0x39b054: 0x86022b4c  lh          $v0, 0x2B4C($s0)
    ctx->pc = 0x39b054u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11084)));
    // 0x39b058: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x39b058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x39b05c: 0xa6022b4c  sh          $v0, 0x2B4C($s0)
    ctx->pc = 0x39b05cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11084), (uint16_t)GPR_U32(ctx, 2));
    // 0x39b060: 0x86032b4c  lh          $v1, 0x2B4C($s0)
    ctx->pc = 0x39b060u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11084)));
    // 0x39b064: 0x86022b4e  lh          $v0, 0x2B4E($s0)
    ctx->pc = 0x39b064u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11086)));
    // 0x39b068: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x39b068u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x39b06c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x39B06Cu;
    {
        const bool branch_taken_0x39b06c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39B070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B06Cu;
        // 0x39b070: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39b06c) {
            ctx->pc = 0x39B080u;
            goto label_39b080;
        }
    }
    ctx->pc = 0x39B074u;
    // 0x39b074: 0xc0e68e0  jal         func_39A380
    ctx->pc = 0x39B074u;
    SET_GPR_U32(ctx, 31, 0x39B07Cu);
    ctx->pc = 0x39B078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39B074u;
    // 0x39b078: 0x24050048  addiu       $a1, $zero, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39A380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39A380u, 0x39B074u, 0x39B07Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39B07Cu;
label_39b07c:
    // 0x39b07c: 0x0  nop
    ctx->pc = 0x39b07cu;
    // NOP
label_39b080:
    // 0x39b080: 0x92032b49  lbu         $v1, 0x2B49($s0)
    ctx->pc = 0x39b080u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11081)));
    // 0x39b084: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x39b084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x39b088: 0x10620085  beq         $v1, $v0, . + 4 + (0x85 << 2)
    ctx->pc = 0x39B088u;
    {
        const bool branch_taken_0x39b088 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x39b088) {
            ctx->pc = 0x39B2A0u;
            goto label_39b2a0;
        }
    }
    ctx->pc = 0x39B090u;
    // 0x39b090: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x39B090u;
    {
        const bool branch_taken_0x39b090 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x39b090) {
            ctx->pc = 0x39B0A0u;
            goto label_39b0a0;
        }
    }
    ctx->pc = 0x39B098u;
    // 0x39b098: 0x100000a9  b           . + 4 + (0xA9 << 2)
    ctx->pc = 0x39B098u;
    {
        const bool branch_taken_0x39b098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x39b098) {
            ctx->pc = 0x39B340u;
            goto label_39b340;
        }
    }
    ctx->pc = 0x39B0A0u;
label_39b0a0:
    // 0x39b0a0: 0xc09e8c0  jal         func_27A300
    ctx->pc = 0x39B0A0u;
    SET_GPR_U32(ctx, 31, 0x39B0A8u);
    ctx->pc = 0x39B0A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39B0A0u;
    // 0x39b0a4: 0x260401c0  addiu       $a0, $s0, 0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27A300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27A300u, 0x39B0A0u, 0x39B0A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39B0A8u;
label_39b0a8:
    // 0x39b0a8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x39B0A8u;
    {
        const bool branch_taken_0x39b0a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39B0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B0A8u;
        // 0x39b0ac: 0x260401c0  addiu       $a0, $s0, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 448));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39b0a8) {
            ctx->pc = 0x39B0C8u;
            goto label_39b0c8;
        }
    }
    ctx->pc = 0x39B0B0u;
    // 0x39b0b0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x39b0b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39b0b4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x39b0b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39b0b8: 0xc09fbec  jal         func_27EFB0
    ctx->pc = 0x39B0B8u;
    SET_GPR_U32(ctx, 31, 0x39B0C0u);
    ctx->pc = 0x39B0BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39B0B8u;
    // 0x39b0bc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27EFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27EFB0u, 0x39B0B8u, 0x39B0C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39B0C0u;
label_39b0c0:
    // 0x39b0c0: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x39B0C0u;
    {
        const bool branch_taken_0x39b0c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x39b0c0) {
            ctx->pc = 0x39B1F8u;
            goto label_39b1f8;
        }
    }
    ctx->pc = 0x39B0C8u;
label_39b0c8:
    // 0x39b0c8: 0x92032b49  lbu         $v1, 0x2B49($s0)
    ctx->pc = 0x39b0c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11081)));
    // 0x39b0cc: 0x14600048  bnez        $v1, . + 4 + (0x48 << 2)
    ctx->pc = 0x39B0CCu;
    {
        const bool branch_taken_0x39b0cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x39b0cc) {
            ctx->pc = 0x39B1F0u;
            goto label_39b1f0;
        }
    }
    ctx->pc = 0x39B0D4u;
    // 0x39b0d4: 0x92032b25  lbu         $v1, 0x2B25($s0)
    ctx->pc = 0x39b0d4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11045)));
    // 0x39b0d8: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x39b0d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x39b0dc: 0x3c022400  lui         $v0, 0x2400
    ctx->pc = 0x39b0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9216 << 16));
    // 0x39b0e0: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x39b0e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x39b0e4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x39b0e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39b0e8: 0x34455502  ori         $a1, $v0, 0x5502
    ctx->pc = 0x39b0e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21762);
    // 0x39b0ec: 0x26070020  addiu       $a3, $s0, 0x20
    ctx->pc = 0x39b0ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x39b0f0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x39b0f0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39b0f4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x39b0f4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39b0f8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x39b0f8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39b0fc: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x39b0fcu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39b100: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x39B100u;
    SET_GPR_U32(ctx, 31, 0x39B108u);
    ctx->pc = 0x39B104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39B100u;
    // 0x39b104: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x39B100u, 0x39B108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39B108u;
label_39b108:
    // 0x39b108: 0xc0972dc  jal         func_25CB70
    ctx->pc = 0x39B108u;
    SET_GPR_U32(ctx, 31, 0x39B110u);
    ctx->pc = 0x39B10Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39B108u;
    // 0x39b10c: 0x260401c0  addiu       $a0, $s0, 0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CB70u, 0x39B108u, 0x39B110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39B110u;
label_39b110:
    // 0x39b110: 0x92022b24  lbu         $v0, 0x2B24($s0)
    ctx->pc = 0x39b110u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11044)));
    // 0x39b114: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x39B114u;
    {
        const bool branch_taken_0x39b114 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x39b114) {
            ctx->pc = 0x39B140u;
            goto label_39b140;
        }
    }
    ctx->pc = 0x39B11Cu;
    // 0x39b11c: 0x860300c2  lh          $v1, 0xC2($s0)
    ctx->pc = 0x39b11cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 194)));
    // 0x39b120: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x39b120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x39b124: 0x24630800  addiu       $v1, $v1, 0x800
    ctx->pc = 0x39b124u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2048));
    // 0x39b128: 0xa60300c2  sh          $v1, 0xC2($s0)
    ctx->pc = 0x39b128u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 194), (uint16_t)GPR_U32(ctx, 3));
    // 0x39b12c: 0x860300c2  lh          $v1, 0xC2($s0)
    ctx->pc = 0x39b12cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 194)));
    // 0x39b130: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x39b130u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x39b134: 0xa60300c2  sh          $v1, 0xC2($s0)
    ctx->pc = 0x39b134u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 194), (uint16_t)GPR_U32(ctx, 3));
    // 0x39b138: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x39B138u;
    {
        const bool branch_taken_0x39b138 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39B13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B138u;
        // 0x39b13c: 0xa2022b49  sb          $v0, 0x2B49($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 11081), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39b138) {
            ctx->pc = 0x39B1E0u;
            goto label_39b1e0;
        }
    }
    ctx->pc = 0x39B140u;
label_39b140:
    // 0x39b140: 0x8e052b28  lw          $a1, 0x2B28($s0)
    ctx->pc = 0x39b140u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11048)));
    // 0x39b144: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x39b144u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x39b148: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x39B148u;
    SET_GPR_U32(ctx, 31, 0x39B150u);
    ctx->pc = 0x39B14Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39B148u;
    // 0x39b14c: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x39B148u, 0x39B150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39B150u;
label_39b150:
    // 0x39b150: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x39B150u;
    {
        const bool branch_taken_0x39b150 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39B154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B150u;
        // 0x39b154: 0x24450020  addiu       $a1, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39b150) {
            ctx->pc = 0x39B178u;
            goto label_39b178;
        }
    }
    ctx->pc = 0x39B158u;
    // 0x39b158: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x39b158u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x39b15c: 0xc0766b8  jal         func_1D9AE0
    ctx->pc = 0x39B15Cu;
    SET_GPR_U32(ctx, 31, 0x39B164u);
    ctx->pc = 0x39B160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39B15Cu;
    // 0x39b160: 0x26060020  addiu       $a2, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AE0u, 0x39B15Cu, 0x39B164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39B164u;
label_39b164:
    // 0x39b164: 0xc096e44  jal         func_25B910
    ctx->pc = 0x39B164u;
    SET_GPR_U32(ctx, 31, 0x39B16Cu);
    ctx->pc = 0x39B168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39B164u;
    // 0x39b168: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B910u, 0x39B164u, 0x39B16Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39B16Cu;
label_39b16c:
    // 0x39b16c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x39B16Cu;
    {
        const bool branch_taken_0x39b16c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39B170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B16Cu;
        // 0x39b170: 0xa60200c2  sh          $v0, 0xC2($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 194), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39b16c) {
            ctx->pc = 0x39B190u;
            goto label_39b190;
        }
    }
    ctx->pc = 0x39B174u;
    // 0x39b174: 0x0  nop
    ctx->pc = 0x39b174u;
    // NOP
label_39b178:
    // 0x39b178: 0x860200c2  lh          $v0, 0xC2($s0)
    ctx->pc = 0x39b178u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 194)));
    // 0x39b17c: 0x24420800  addiu       $v0, $v0, 0x800
    ctx->pc = 0x39b17cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2048));
    // 0x39b180: 0xa60200c2  sh          $v0, 0xC2($s0)
    ctx->pc = 0x39b180u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 194), (uint16_t)GPR_U32(ctx, 2));
    // 0x39b184: 0x860200c2  lh          $v0, 0xC2($s0)
    ctx->pc = 0x39b184u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 194)));
    // 0x39b188: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x39b188u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x39b18c: 0xa60200c2  sh          $v0, 0xC2($s0)
    ctx->pc = 0x39b18cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 194), (uint16_t)GPR_U32(ctx, 2));
label_39b190:
    // 0x39b190: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x39b190u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x39b194: 0x78225c10  lq          $v0, 0x5C10($at)
    ctx->pc = 0x39b194u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x665C10u));
    // 0x39b198: 0x7e0200a0  sq          $v0, 0xA0($s0)
    ctx->pc = 0x39b198u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 160), GPR_VEC(ctx, 2));
    // 0x39b19c: 0x860500c2  lh          $a1, 0xC2($s0)
    ctx->pc = 0x39b19cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 194)));
    // 0x39b1a0: 0xc096e34  jal         func_25B8D0
    ctx->pc = 0x39B1A0u;
    SET_GPR_U32(ctx, 31, 0x39B1A8u);
    ctx->pc = 0x39B1A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39B1A0u;
    // 0x39b1a4: 0x26040090  addiu       $a0, $s0, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B8D0u, 0x39B1A0u, 0x39B1A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39B1A8u;
label_39b1a8:
    // 0x39b1a8: 0x92022b24  lbu         $v0, 0x2B24($s0)
    ctx->pc = 0x39b1a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11044)));
    // 0x39b1ac: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x39B1ACu;
    {
        const bool branch_taken_0x39b1ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39B1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B1ACu;
        // 0x39b1b0: 0x3c02447a  lui         $v0, 0x447A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39b1ac) {
            ctx->pc = 0x39B1C4u;
            goto label_39b1c4;
        }
    }
    ctx->pc = 0x39B1B4u;
    // 0x39b1b4: 0x3c02442f  lui         $v0, 0x442F
    ctx->pc = 0x39b1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17455 << 16));
    // 0x39b1b8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x39b1b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x39b1bc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x39B1BCu;
    {
        const bool branch_taken_0x39b1bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39B1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B1BCu;
        // 0x39b1c0: 0x26040090  addiu       $a0, $s0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39b1bc) {
            ctx->pc = 0x39B1CCu;
            goto label_39b1cc;
        }
    }
    ctx->pc = 0x39B1C4u;
label_39b1c4:
    // 0x39b1c4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x39b1c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x39b1c8: 0x26040090  addiu       $a0, $s0, 0x90
    ctx->pc = 0x39b1c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
label_39b1cc:
    // 0x39b1cc: 0xc076690  jal         func_1D9A40
    ctx->pc = 0x39B1CCu;
    SET_GPR_U32(ctx, 31, 0x39B1D4u);
    ctx->pc = 0x39B1D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39B1CCu;
    // 0x39b1d0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A40u, 0x39B1CCu, 0x39B1D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39B1D4u;
label_39b1d4:
    // 0x39b1d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x39b1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x39b1d8: 0xa2022b49  sb          $v0, 0x2B49($s0)
    ctx->pc = 0x39b1d8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11081), (uint8_t)GPR_U32(ctx, 2));
    // 0x39b1dc: 0x0  nop
    ctx->pc = 0x39b1dcu;
    // NOP
label_39b1e0:
    // 0x39b1e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39b1e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39b1e4: 0xc0e68fc  jal         func_39A3F0
    ctx->pc = 0x39B1E4u;
    SET_GPR_U32(ctx, 31, 0x39B1ECu);
    ctx->pc = 0x39B1E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39B1E4u;
    // 0x39b1e8: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39A3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39A3F0u, 0x39B1E4u, 0x39B1ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39B1ECu;
label_39b1ec:
    // 0x39b1ec: 0x0  nop
    ctx->pc = 0x39b1ecu;
    // NOP
label_39b1f0:
    // 0x39b1f0: 0x1000007d  b           . + 4 + (0x7D << 2)
    ctx->pc = 0x39B1F0u;
    {
        const bool branch_taken_0x39b1f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x39b1f0) {
            ctx->pc = 0x39B3E8u;
            goto label_39b3e8;
        }
    }
    ctx->pc = 0x39B1F8u;
label_39b1f8:
    // 0x39b1f8: 0xc09e8d0  jal         func_27A340
    ctx->pc = 0x39B1F8u;
    SET_GPR_U32(ctx, 31, 0x39B200u);
    ctx->pc = 0x39B1FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39B1F8u;
    // 0x39b1fc: 0x260401c0  addiu       $a0, $s0, 0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27A340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27A340u, 0x39B1F8u, 0x39B200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39B200u;
label_39b200:
    // 0x39b200: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x39B200u;
    {
        const bool branch_taken_0x39b200 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39B204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B200u;
        // 0x39b204: 0x260401c0  addiu       $a0, $s0, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 448));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39b200) {
            ctx->pc = 0x39B228u;
            goto label_39b228;
        }
    }
    ctx->pc = 0x39B208u;
    // 0x39b208: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x39b208u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39b20c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x39b20cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39b210: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x39b210u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39b214: 0xc09f9a4  jal         func_27E690
    ctx->pc = 0x39B214u;
    SET_GPR_U32(ctx, 31, 0x39B21Cu);
    ctx->pc = 0x39B218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39B214u;
    // 0x39b218: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27E690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27E690u, 0x39B214u, 0x39B21Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39B21Cu;
label_39b21c:
    // 0x39b21c: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x39B21Cu;
    {
        const bool branch_taken_0x39b21c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x39b21c) {
            ctx->pc = 0x39B340u;
            goto label_39b340;
        }
    }
    ctx->pc = 0x39B224u;
    // 0x39b224: 0x0  nop
    ctx->pc = 0x39b224u;
    // NOP
label_39b228:
    // 0x39b228: 0x8e052b40  lw          $a1, 0x2B40($s0)
    ctx->pc = 0x39b228u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11072)));
    // 0x39b22c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x39b22cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x39b230: 0x260401c0  addiu       $a0, $s0, 0x1C0
    ctx->pc = 0x39b230u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 448));
    // 0x39b234: 0xc097184  jal         func_25C610
    ctx->pc = 0x39B234u;
    SET_GPR_U32(ctx, 31, 0x39B23Cu);
    ctx->pc = 0x39B238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39B234u;
    // 0x39b238: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C610u, 0x39B234u, 0x39B23Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39B23Cu;
label_39b23c:
    // 0x39b23c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x39B23Cu;
    {
        const bool branch_taken_0x39b23c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x39b23c) {
            ctx->pc = 0x39B288u;
            goto label_39b288;
        }
    }
    ctx->pc = 0x39B244u;
    // 0x39b244: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x39b244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x39b248: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x39b248u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x39b24c: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x39b24cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x39b250: 0x26072b30  addiu       $a3, $s0, 0x2B30
    ctx->pc = 0x39b250u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 11056));
    // 0x39b254: 0x26080090  addiu       $t0, $s0, 0x90
    ctx->pc = 0x39b254u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x39b258: 0xae022b44  sw          $v0, 0x2B44($s0)
    ctx->pc = 0x39b258u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11076), GPR_U32(ctx, 2));
    // 0x39b25c: 0x8e042b44  lw          $a0, 0x2B44($s0)
    ctx->pc = 0x39b25cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11076)));
    // 0x39b260: 0xc0971e4  jal         func_25C790
    ctx->pc = 0x39B260u;
    SET_GPR_U32(ctx, 31, 0x39B268u);
    ctx->pc = 0x39B264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39B260u;
    // 0x39b264: 0x26092b48  addiu       $t1, $s0, 0x2B48 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 11080));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C790u, 0x39B260u, 0x39B268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39B268u;
label_39b268:
    // 0x39b268: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39b268u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39b26c: 0xc0e68e0  jal         func_39A380
    ctx->pc = 0x39B26Cu;
    SET_GPR_U32(ctx, 31, 0x39B274u);
    ctx->pc = 0x39B270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39B26Cu;
    // 0x39b270: 0x24050047  addiu       $a1, $zero, 0x47 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39A380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39A380u, 0x39B26Cu, 0x39B274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39B274u;
label_39b274:
    // 0x39b274: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39b274u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39b278: 0xc0e68fc  jal         func_39A3F0
    ctx->pc = 0x39B278u;
    SET_GPR_U32(ctx, 31, 0x39B280u);
    ctx->pc = 0x39B27Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39B278u;
    // 0x39b27c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39A3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39A3F0u, 0x39B278u, 0x39B280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39B280u;
label_39b280:
    // 0x39b280: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x39B280u;
    {
        const bool branch_taken_0x39b280 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x39b280) {
            ctx->pc = 0x39B298u;
            goto label_39b298;
        }
    }
    ctx->pc = 0x39B288u;
label_39b288:
    // 0x39b288: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39b288u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39b28c: 0xc0e68e0  jal         func_39A380
    ctx->pc = 0x39B28Cu;
    SET_GPR_U32(ctx, 31, 0x39B294u);
    ctx->pc = 0x39B290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39B28Cu;
    // 0x39b290: 0x24050048  addiu       $a1, $zero, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39A380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39A380u, 0x39B28Cu, 0x39B294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39B294u;
label_39b294:
    // 0x39b294: 0x0  nop
    ctx->pc = 0x39b294u;
    // NOP
label_39b298:
    // 0x39b298: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x39B298u;
    {
        const bool branch_taken_0x39b298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x39b298) {
            ctx->pc = 0x39B3E8u;
            goto label_39b3e8;
        }
    }
    ctx->pc = 0x39B2A0u;
label_39b2a0:
    // 0x39b2a0: 0xc09e8d0  jal         func_27A340
    ctx->pc = 0x39B2A0u;
    SET_GPR_U32(ctx, 31, 0x39B2A8u);
    ctx->pc = 0x39B2A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39B2A0u;
    // 0x39b2a4: 0x260401c0  addiu       $a0, $s0, 0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27A340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27A340u, 0x39B2A0u, 0x39B2A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39B2A8u;
label_39b2a8:
    // 0x39b2a8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x39B2A8u;
    {
        const bool branch_taken_0x39b2a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39B2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B2A8u;
        // 0x39b2ac: 0x260401c0  addiu       $a0, $s0, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 448));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39b2a8) {
            ctx->pc = 0x39B2D0u;
            goto label_39b2d0;
        }
    }
    ctx->pc = 0x39B2B0u;
    // 0x39b2b0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x39b2b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39b2b4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x39b2b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39b2b8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x39b2b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x39b2bc: 0xc09f9a4  jal         func_27E690
    ctx->pc = 0x39B2BCu;
    SET_GPR_U32(ctx, 31, 0x39B2C4u);
    ctx->pc = 0x39B2C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39B2BCu;
    // 0x39b2c0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27E690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27E690u, 0x39B2BCu, 0x39B2C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39B2C4u;
label_39b2c4:
    // 0x39b2c4: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x39B2C4u;
    {
        const bool branch_taken_0x39b2c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x39b2c4) {
            ctx->pc = 0x39B340u;
            goto label_39b340;
        }
    }
    ctx->pc = 0x39B2CCu;
    // 0x39b2cc: 0x0  nop
    ctx->pc = 0x39b2ccu;
    // NOP
label_39b2d0:
    // 0x39b2d0: 0x8e052b40  lw          $a1, 0x2B40($s0)
    ctx->pc = 0x39b2d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11072)));
    // 0x39b2d4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x39b2d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x39b2d8: 0x260401c0  addiu       $a0, $s0, 0x1C0
    ctx->pc = 0x39b2d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 448));
    // 0x39b2dc: 0xc097184  jal         func_25C610
    ctx->pc = 0x39B2DCu;
    SET_GPR_U32(ctx, 31, 0x39B2E4u);
    ctx->pc = 0x39B2E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39B2DCu;
    // 0x39b2e0: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C610u, 0x39B2DCu, 0x39B2E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39B2E4u;
label_39b2e4:
    // 0x39b2e4: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x39B2E4u;
    {
        const bool branch_taken_0x39b2e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x39b2e4) {
            ctx->pc = 0x39B328u;
            goto label_39b328;
        }
    }
    ctx->pc = 0x39B2ECu;
    // 0x39b2ec: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x39b2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x39b2f0: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x39b2f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x39b2f4: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x39b2f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x39b2f8: 0x26072b30  addiu       $a3, $s0, 0x2B30
    ctx->pc = 0x39b2f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 11056));
    // 0x39b2fc: 0x26080090  addiu       $t0, $s0, 0x90
    ctx->pc = 0x39b2fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x39b300: 0xae022b44  sw          $v0, 0x2B44($s0)
    ctx->pc = 0x39b300u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11076), GPR_U32(ctx, 2));
    // 0x39b304: 0x8e042b44  lw          $a0, 0x2B44($s0)
    ctx->pc = 0x39b304u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11076)));
    // 0x39b308: 0xc0971e4  jal         func_25C790
    ctx->pc = 0x39B308u;
    SET_GPR_U32(ctx, 31, 0x39B310u);
    ctx->pc = 0x39B30Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39B308u;
    // 0x39b30c: 0x26092b48  addiu       $t1, $s0, 0x2B48 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 11080));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C790u, 0x39B308u, 0x39B310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39B310u;
label_39b310:
    // 0x39b310: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39b310u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39b314: 0xc0e68e0  jal         func_39A380
    ctx->pc = 0x39B314u;
    SET_GPR_U32(ctx, 31, 0x39B31Cu);
    ctx->pc = 0x39B318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39B314u;
    // 0x39b318: 0x24050047  addiu       $a1, $zero, 0x47 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39A380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39A380u, 0x39B314u, 0x39B31Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39B31Cu;
label_39b31c:
    // 0x39b31c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x39B31Cu;
    {
        const bool branch_taken_0x39b31c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x39b31c) {
            ctx->pc = 0x39B338u;
            goto label_39b338;
        }
    }
    ctx->pc = 0x39B324u;
    // 0x39b324: 0x0  nop
    ctx->pc = 0x39b324u;
    // NOP
label_39b328:
    // 0x39b328: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39b328u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39b32c: 0xc0e68e0  jal         func_39A380
    ctx->pc = 0x39B32Cu;
    SET_GPR_U32(ctx, 31, 0x39B334u);
    ctx->pc = 0x39B330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39B32Cu;
    // 0x39b330: 0x24050048  addiu       $a1, $zero, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39A380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39A380u, 0x39B32Cu, 0x39B334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39B334u;
label_39b334:
    // 0x39b334: 0x0  nop
    ctx->pc = 0x39b334u;
    // NOP
label_39b338:
    // 0x39b338: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x39B338u;
    {
        const bool branch_taken_0x39b338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x39b338) {
            ctx->pc = 0x39B3E8u;
            goto label_39b3e8;
        }
    }
    ctx->pc = 0x39B340u;
label_39b340:
    // 0x39b340: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x39b340u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x39b344: 0xafa2008c  sw          $v0, 0x8C($sp)
    ctx->pc = 0x39b344u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 2));
    // 0x39b348: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x39b348u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x39b34c: 0x26050080  addiu       $a1, $s0, 0x80
    ctx->pc = 0x39b34cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x39b350: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x39b350u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x39b354: 0x27a70060  addiu       $a3, $sp, 0x60
    ctx->pc = 0x39b354u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x39b358: 0xc096cc8  jal         func_25B320
    ctx->pc = 0x39B358u;
    SET_GPR_U32(ctx, 31, 0x39B360u);
    ctx->pc = 0x39B35Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39B358u;
    // 0x39b35c: 0x27a8008c  addiu       $t0, $sp, 0x8C (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B320u, 0x39B358u, 0x39B360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39B360u;
label_39b360:
    // 0x39b360: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x39B360u;
    {
        const bool branch_taken_0x39b360 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x39b360) {
            ctx->pc = 0x39B3E8u;
            goto label_39b3e8;
        }
    }
    ctx->pc = 0x39B368u;
    // 0x39b368: 0x92032b25  lbu         $v1, 0x2B25($s0)
    ctx->pc = 0x39b368u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11045)));
    // 0x39b36c: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x39b36cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x39b370: 0x3c022500  lui         $v0, 0x2500
    ctx->pc = 0x39b370u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9472 << 16));
    // 0x39b374: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x39b374u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x39b378: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x39b378u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39b37c: 0x34455502  ori         $a1, $v0, 0x5502
    ctx->pc = 0x39b37cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21762);
    // 0x39b380: 0x26070020  addiu       $a3, $s0, 0x20
    ctx->pc = 0x39b380u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x39b384: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x39b384u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39b388: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x39b388u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39b38c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x39b38cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39b390: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x39b390u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39b394: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x39B394u;
    SET_GPR_U32(ctx, 31, 0x39B39Cu);
    ctx->pc = 0x39B398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39B394u;
    // 0x39b398: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x39B394u, 0x39B39Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39B39Cu;
label_39b39c:
    // 0x39b39c: 0x7ba30070  lq          $v1, 0x70($sp)
    ctx->pc = 0x39b39cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x39b3a0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x39b3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x39b3a4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x39b3a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x39b3a8: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x39b3a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x39b3ac: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x39b3acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x39b3b0: 0xc076690  jal         func_1D9A40
    ctx->pc = 0x39B3B0u;
    SET_GPR_U32(ctx, 31, 0x39B3B8u);
    ctx->pc = 0x39B3B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39B3B0u;
    // 0x39b3b4: 0x7e030020  sq          $v1, 0x20($s0) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A40u, 0x39B3B0u, 0x39B3B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39B3B8u;
label_39b3b8:
    // 0x39b3b8: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x39b3b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x39b3bc: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x39b3bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x39b3c0: 0xc0766a8  jal         func_1D9AA0
    ctx->pc = 0x39B3C0u;
    SET_GPR_U32(ctx, 31, 0x39B3C8u);
    ctx->pc = 0x39B3C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39B3C0u;
    // 0x39b3c4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AA0u, 0x39B3C0u, 0x39B3C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39B3C8u;
label_39b3c8:
    // 0x39b3c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39b3c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39b3cc: 0xc0e68e0  jal         func_39A380
    ctx->pc = 0x39B3CCu;
    SET_GPR_U32(ctx, 31, 0x39B3D4u);
    ctx->pc = 0x39B3D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39B3CCu;
    // 0x39b3d0: 0x24050046  addiu       $a1, $zero, 0x46 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39A380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39A380u, 0x39B3CCu, 0x39B3D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39B3D4u;
label_39b3d4:
    // 0x39b3d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39b3d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39b3d8: 0xc0e68fc  jal         func_39A3F0
    ctx->pc = 0x39B3D8u;
    SET_GPR_U32(ctx, 31, 0x39B3E0u);
    ctx->pc = 0x39B3DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39B3D8u;
    // 0x39b3dc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39A3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39A3F0u, 0x39B3D8u, 0x39B3E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39B3E0u;
label_39b3e0:
    // 0x39b3e0: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x39B3E0u;
    {
        const bool branch_taken_0x39b3e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x39b3e0) {
            ctx->pc = 0x39B3E8u;
            goto label_39b3e8;
        }
    }
    ctx->pc = 0x39B3E8u;
label_39b3e8:
    // 0x39b3e8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x39b3e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x39b3ec: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x39b3ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39b3f0: 0x3e00008  jr          $ra
    ctx->pc = 0x39B3F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39B3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B3F0u;
        // 0x39b3f4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39B3F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39B3F8u;
}
