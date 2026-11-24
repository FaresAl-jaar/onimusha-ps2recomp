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

// Function: sub_003F0A10
// Address: 0x3f0a10 - 0x3f0b18
void sub_003F0A10_0x3f0a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F0A10_0x3f0a10");
#endif

    switch (ctx->pc) {
        case 0x3f0a10u: goto label_3f0a10;
        case 0x3f0a14u: goto label_3f0a14;
        case 0x3f0a18u: goto label_3f0a18;
        case 0x3f0a1cu: goto label_3f0a1c;
        case 0x3f0a20u: goto label_3f0a20;
        case 0x3f0a24u: goto label_3f0a24;
        case 0x3f0a28u: goto label_3f0a28;
        case 0x3f0a2cu: goto label_3f0a2c;
        case 0x3f0a30u: goto label_3f0a30;
        case 0x3f0a34u: goto label_3f0a34;
        case 0x3f0a38u: goto label_3f0a38;
        case 0x3f0a3cu: goto label_3f0a3c;
        case 0x3f0a40u: goto label_3f0a40;
        case 0x3f0a44u: goto label_3f0a44;
        case 0x3f0a48u: goto label_3f0a48;
        case 0x3f0a4cu: goto label_3f0a4c;
        case 0x3f0a50u: goto label_3f0a50;
        case 0x3f0a54u: goto label_3f0a54;
        case 0x3f0a58u: goto label_3f0a58;
        case 0x3f0a5cu: goto label_3f0a5c;
        case 0x3f0a60u: goto label_3f0a60;
        case 0x3f0a64u: goto label_3f0a64;
        case 0x3f0a68u: goto label_3f0a68;
        case 0x3f0a6cu: goto label_3f0a6c;
        case 0x3f0a70u: goto label_3f0a70;
        case 0x3f0a74u: goto label_3f0a74;
        case 0x3f0a78u: goto label_3f0a78;
        case 0x3f0a7cu: goto label_3f0a7c;
        case 0x3f0a80u: goto label_3f0a80;
        case 0x3f0a84u: goto label_3f0a84;
        case 0x3f0a88u: goto label_3f0a88;
        case 0x3f0a8cu: goto label_3f0a8c;
        case 0x3f0a90u: goto label_3f0a90;
        case 0x3f0a94u: goto label_3f0a94;
        case 0x3f0a98u: goto label_3f0a98;
        case 0x3f0a9cu: goto label_3f0a9c;
        case 0x3f0aa0u: goto label_3f0aa0;
        case 0x3f0aa4u: goto label_3f0aa4;
        case 0x3f0aa8u: goto label_3f0aa8;
        case 0x3f0aacu: goto label_3f0aac;
        case 0x3f0ab0u: goto label_3f0ab0;
        case 0x3f0ab4u: goto label_3f0ab4;
        case 0x3f0ab8u: goto label_3f0ab8;
        case 0x3f0abcu: goto label_3f0abc;
        case 0x3f0ac0u: goto label_3f0ac0;
        case 0x3f0ac4u: goto label_3f0ac4;
        case 0x3f0ac8u: goto label_3f0ac8;
        case 0x3f0accu: goto label_3f0acc;
        case 0x3f0ad0u: goto label_3f0ad0;
        case 0x3f0ad4u: goto label_3f0ad4;
        case 0x3f0ad8u: goto label_3f0ad8;
        case 0x3f0adcu: goto label_3f0adc;
        case 0x3f0ae0u: goto label_3f0ae0;
        case 0x3f0ae4u: goto label_3f0ae4;
        case 0x3f0ae8u: goto label_3f0ae8;
        case 0x3f0aecu: goto label_3f0aec;
        case 0x3f0af0u: goto label_3f0af0;
        case 0x3f0af4u: goto label_3f0af4;
        case 0x3f0af8u: goto label_3f0af8;
        case 0x3f0afcu: goto label_3f0afc;
        case 0x3f0b00u: goto label_3f0b00;
        case 0x3f0b04u: goto label_3f0b04;
        case 0x3f0b08u: goto label_3f0b08;
        case 0x3f0b0cu: goto label_3f0b0c;
        case 0x3f0b10u: goto label_3f0b10;
        case 0x3f0b14u: goto label_3f0b14;
        default: break;
    }

    ctx->pc = 0x3f0a10u;

label_3f0a10:
    // 0x3f0a10: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3f0a10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_3f0a14:
    // 0x3f0a14: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3f0a14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3f0a18:
    // 0x3f0a18: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x3f0a18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3f0a1c:
    // 0x3f0a1c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3f0a1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3f0a20:
    // 0x3f0a20: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3f0a20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3f0a24:
    // 0x3f0a24: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x3f0a24u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3f0a28:
    // 0x3f0a28: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3f0a28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3f0a2c:
    // 0x3f0a2c: 0x140882d  daddu       $s1, $t2, $zero
    ctx->pc = 0x3f0a2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_3f0a30:
    // 0x3f0a30: 0xc4830000  lwc1        $f3, 0x0($a0)
    ctx->pc = 0x3f0a30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3f0a34:
    // 0x3f0a34: 0x30f0ffff  andi        $s0, $a3, 0xFFFF
    ctx->pc = 0x3f0a34u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
label_3f0a38:
    // 0x3f0a38: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x3f0a38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3f0a3c:
    // 0x3f0a3c: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x3f0a3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3f0a40:
    // 0x3f0a40: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x3f0a40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3f0a44:
    // 0x3f0a44: 0xe4430000  swc1        $f3, 0x0($v0)
    ctx->pc = 0x3f0a44u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_3f0a48:
    // 0x3f0a48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f0a48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f0a4c:
    // 0x3f0a4c: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x3f0a4cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_3f0a50:
    // 0x3f0a50: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x3f0a50u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_3f0a54:
    // 0x3f0a54: 0xc0a4408  jal         func_291020
label_3f0a58:
    if (ctx->pc == 0x3F0A58u) {
        ctx->pc = 0x3F0A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0A54u;
        // 0x3f0a58: 0xe440000c  swc1        $f0, 0xC($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F0A5Cu;
        goto label_3f0a5c;
    }
    ctx->pc = 0x3F0A54u;
    SET_GPR_U32(ctx, 31, 0x3F0A5Cu);
    ctx->pc = 0x3F0A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F0A54u;
    // 0x3f0a58: 0xe440000c  swc1        $f0, 0xC($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x291020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291020u, 0x3F0A54u, 0x3F0A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F0A5Cu;
label_3f0a5c:
    // 0x3f0a5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f0a5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f0a60:
    // 0x3f0a60: 0xc0a43fc  jal         func_290FF0
label_3f0a64:
    if (ctx->pc == 0x3F0A64u) {
        ctx->pc = 0x3F0A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0A60u;
        // 0x3f0a64: 0x305000ff  andi        $s0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F0A68u;
        goto label_3f0a68;
    }
    ctx->pc = 0x3F0A60u;
    SET_GPR_U32(ctx, 31, 0x3F0A68u);
    ctx->pc = 0x3F0A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F0A60u;
    // 0x3f0a64: 0x305000ff  andi        $s0, $v0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x290FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290FF0u, 0x3F0A60u, 0x3F0A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F0A68u;
label_3f0a68:
    // 0x3f0a68: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x3f0a68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
label_3f0a6c:
    // 0x3f0a6c: 0x320600ff  andi        $a2, $s0, 0xFF
    ctx->pc = 0x3f0a6cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_3f0a70:
    // 0x3f0a70: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x3f0a70u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_3f0a74:
    // 0x3f0a74: 0x248486e0  addiu       $a0, $a0, -0x7920
    ctx->pc = 0x3f0a74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936288));
label_3f0a78:
    // 0x3f0a78: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3f0a78u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3f0a7c:
    // 0x3f0a7c: 0x24080015  addiu       $t0, $zero, 0x15
    ctx->pc = 0x3f0a7cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_3f0a80:
    // 0x3f0a80: 0x240900fe  addiu       $t1, $zero, 0xFE
    ctx->pc = 0x3f0a80u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 254));
label_3f0a84:
    // 0x3f0a84: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3f0a84u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3f0a88:
    // 0x3f0a88: 0xc0510e0  jal         func_144380
label_3f0a8c:
    if (ctx->pc == 0x3F0A8Cu) {
        ctx->pc = 0x3F0A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0A88u;
        // 0x3f0a8c: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F0A90u;
        goto label_3f0a90;
    }
    ctx->pc = 0x3F0A88u;
    SET_GPR_U32(ctx, 31, 0x3F0A90u);
    ctx->pc = 0x3F0A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F0A88u;
    // 0x3f0a8c: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144380u, 0x3F0A88u, 0x3F0A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F0A90u;
label_3f0a90:
    // 0x3f0a90: 0x44920800  mtc1        $s2, $f1
    ctx->pc = 0x3f0a90u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3f0a94:
    // 0x3f0a94: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3f0a94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3f0a98:
    // 0x3f0a98: 0x3c024500  lui         $v0, 0x4500
    ctx->pc = 0x3f0a98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17664 << 16));
label_3f0a9c:
    // 0x3f0a9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f0a9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f0aa0:
    // 0x3f0aa0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3f0aa0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_3f0aa4:
    // 0x3f0aa4: 0x24050216  addiu       $a1, $zero, 0x216
    ctx->pc = 0x3f0aa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 534));
label_3f0aa8:
    // 0x3f0aa8: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x3f0aa8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3f0aac:
    // 0x3f0aac: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x3f0aacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3f0ab0:
    // 0x3f0ab0: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x3f0ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
label_3f0ab4:
    // 0x3f0ab4: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x3f0ab4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_3f0ab8:
    // 0x3f0ab8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3f0ab8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3f0abc:
    // 0x3f0abc: 0x0  nop
    ctx->pc = 0x3f0abcu;
    // NOP
label_3f0ac0:
    // 0x3f0ac0: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x3f0ac0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_3f0ac4:
    // 0x3f0ac4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3f0ac4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3f0ac8:
    // 0x3f0ac8: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x3f0ac8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_3f0acc:
    // 0x3f0acc: 0x0  nop
    ctx->pc = 0x3f0accu;
    // NOP
label_3f0ad0:
    // 0x3f0ad0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x3f0ad0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_3f0ad4:
    // 0x3f0ad4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3f0ad4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_3f0ad8:
    // 0x3f0ad8: 0xc0d0484  jal         func_341210
label_3f0adc:
    if (ctx->pc == 0x3F0ADCu) {
        ctx->pc = 0x3F0ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0AD8u;
        // 0x3f0adc: 0x30470fff  andi        $a3, $v0, 0xFFF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F0AE0u;
        goto label_3f0ae0;
    }
    ctx->pc = 0x3F0AD8u;
    SET_GPR_U32(ctx, 31, 0x3F0AE0u);
    ctx->pc = 0x3F0ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F0AD8u;
    // 0x3f0adc: 0x30470fff  andi        $a3, $v0, 0xFFF (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    ctx->in_delay_slot = false;
    ctx->pc = 0x341210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341210u, 0x3F0AD8u, 0x3F0AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F0AE0u;
label_3f0ae0:
    // 0x3f0ae0: 0x8e1904d4  lw          $t9, 0x4D4($s0)
    ctx->pc = 0x3f0ae0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1236)));
label_3f0ae4:
    // 0x3f0ae4: 0x8f390040  lw          $t9, 0x40($t9)
    ctx->pc = 0x3f0ae4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 64)));
label_3f0ae8:
    // 0x3f0ae8: 0x320f809  jalr        $t9
label_3f0aec:
    if (ctx->pc == 0x3F0AECu) {
        ctx->pc = 0x3F0AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0AE8u;
        // 0x3f0aec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F0AF0u;
        goto label_3f0af0;
    }
    ctx->pc = 0x3F0AE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3F0AF0u);
        ctx->pc = 0x3F0AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0AE8u;
        // 0x3f0aec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F0AE8u, 0x3F0AF0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3F0AF0u;
label_3f0af0:
    // 0x3f0af0: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x3f0af0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_3f0af4:
    // 0x3f0af4: 0x112c3c  dsll32      $a1, $s1, 16
    ctx->pc = 0x3f0af4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) << (32 + 16));
label_3f0af8:
    // 0x3f0af8: 0xc0d1664  jal         func_345990
label_3f0afc:
    if (ctx->pc == 0x3F0AFCu) {
        ctx->pc = 0x3F0AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0AF8u;
        // 0x3f0afc: 0x52c3f  dsra32      $a1, $a1, 16 (Delay Slot)
        SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F0B00u;
        goto label_3f0b00;
    }
    ctx->pc = 0x3F0AF8u;
    SET_GPR_U32(ctx, 31, 0x3F0B00u);
    ctx->pc = 0x3F0AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F0AF8u;
    // 0x3f0afc: 0x52c3f  dsra32      $a1, $a1, 16 (Delay Slot)
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x345990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x345990u, 0x3F0AF8u, 0x3F0B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F0B00u;
label_3f0b00:
    // 0x3f0b00: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3f0b00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3f0b04:
    // 0x3f0b04: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3f0b04u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3f0b08:
    // 0x3f0b08: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3f0b08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3f0b0c:
    // 0x3f0b0c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3f0b0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3f0b10:
    // 0x3f0b10: 0x3e00008  jr          $ra
label_3f0b14:
    if (ctx->pc == 0x3F0B14u) {
        ctx->pc = 0x3F0B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0B10u;
        // 0x3f0b14: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F0B18u;
        goto label_fallthrough_0x3f0b10;
    }
    ctx->pc = 0x3F0B10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F0B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0B10u;
        // 0x3f0b14: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F0B10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3f0b10:
    ctx->pc = 0x3F0B18u;
}
