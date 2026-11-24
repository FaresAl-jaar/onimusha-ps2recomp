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

// Function: sub_002C0B90
// Address: 0x2c0b90 - 0x2c0e18
void sub_002C0B90_0x2c0b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C0B90_0x2c0b90");
#endif

    switch (ctx->pc) {
        case 0x2c0bccu: goto label_2c0bcc;
        case 0x2c0bf8u: goto label_2c0bf8;
        case 0x2c0c08u: goto label_2c0c08;
        case 0x2c0c60u: goto label_2c0c60;
        case 0x2c0c70u: goto label_2c0c70;
        case 0x2c0dc4u: goto label_2c0dc4;
        default: break;
    }

    ctx->pc = 0x2c0b90u;

    // 0x2c0b90: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2c0b90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2c0b94: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2c0b94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2c0b98: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2c0b98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2c0b9c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2c0b9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2c0ba0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2c0ba0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2c0ba4: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2c0ba4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0ba8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2c0ba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2c0bac: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2c0bacu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0bb0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2c0bb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2c0bb4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2c0bb4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0bb8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c0bb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2c0bbc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c0bbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c0bc0: 0x8c850088  lw          $a1, 0x88($a0)
    ctx->pc = 0x2c0bc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
    // 0x2c0bc4: 0xc0b221c  jal         func_2C8870
    ctx->pc = 0x2C0BC4u;
    SET_GPR_U32(ctx, 31, 0x2C0BCCu);
    ctx->pc = 0x2C0BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C0BC4u;
    // 0x2c0bc8: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C8870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8870u, 0x2C0BC4u, 0x2C0BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C0BCCu;
label_2c0bcc:
    // 0x2c0bcc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2c0bccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0bd0: 0x12200065  beqz        $s1, . + 4 + (0x65 << 2)
    ctx->pc = 0x2C0BD0u;
    {
        const bool branch_taken_0x2c0bd0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c0bd0) {
            ctx->pc = 0x2C0D68u;
            goto label_2c0d68;
        }
    }
    ctx->pc = 0x2C0BD8u;
    // 0x2c0bd8: 0x92420001  lbu         $v0, 0x1($s2)
    ctx->pc = 0x2c0bd8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x2c0bdc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2c0bdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2c0be0: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2C0BE0u;
    {
        const bool branch_taken_0x2c0be0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C0BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0BE0u;
        // 0x2c0be4: 0x82500002  lb          $s0, 0x2($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0be0) {
            ctx->pc = 0x2C0C50u;
            goto label_2c0c50;
        }
    }
    ctx->pc = 0x2C0BE8u;
    // 0x2c0be8: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2c0be8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2c0bec: 0x26650020  addiu       $a1, $s3, 0x20
    ctx->pc = 0x2c0becu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x2c0bf0: 0xc0414d0  jal         func_105340
    ctx->pc = 0x2C0BF0u;
    SET_GPR_U32(ctx, 31, 0x2C0BF8u);
    ctx->pc = 0x2C0BF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C0BF0u;
    // 0x2c0bf4: 0x26260020  addiu       $a2, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x2C0BF0u, 0x2C0BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C0BF8u;
label_2c0bf8:
    // 0x2c0bf8: 0x27b60088  addiu       $s6, $sp, 0x88
    ctx->pc = 0x2c0bf8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    // 0x2c0bfc: 0xc6cd0000  lwc1        $f13, 0x0($s6)
    ctx->pc = 0x2c0bfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2c0c00: 0xc047b88  jal         func_11EE20
    ctx->pc = 0x2C0C00u;
    SET_GPR_U32(ctx, 31, 0x2C0C08u);
    ctx->pc = 0x2C0C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C0C00u;
    // 0x2c0c04: 0xc7ac0080  lwc1        $f12, 0x80($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EE20u, 0x2C0C00u, 0x2C0C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C0C08u;
label_2c0c08:
    // 0x2c0c08: 0x3c034422  lui         $v1, 0x4422
    ctx->pc = 0x2c0c08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17442 << 16));
    // 0x2c0c0c: 0x862200c2  lh          $v0, 0xC2($s1)
    ctx->pc = 0x2c0c0cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 194)));
    // 0x2c0c10: 0x3463f983  ori         $v1, $v1, 0xF983
    ctx->pc = 0x2c0c10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)63875);
    // 0x2c0c14: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2c0c14u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c0c18: 0x0  nop
    ctx->pc = 0x2c0c18u;
    // NOP
    // 0x2c0c1c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2c0c1cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c0c20: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2c0c20u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2c0c24: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x2c0c24u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2c0c28: 0x0  nop
    ctx->pc = 0x2c0c28u;
    // NOP
    // 0x2c0c2c: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x2c0c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2c0c30: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x2c0c30u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x2c0c34: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x2c0c34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x2c0c38: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x2c0c38u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x2c0c3c: 0x2021023  subu        $v0, $s0, $v0
    ctx->pc = 0x2c0c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2c0c40: 0x2863c  dsll32      $s0, $v0, 24
    ctx->pc = 0x2c0c40u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 24));
    // 0x2c0c44: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x2C0C44u;
    {
        const bool branch_taken_0x2c0c44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C0C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0C44u;
        // 0x2c0c48: 0x10863f  dsra32      $s0, $s0, 24 (Delay Slot)
        SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0c44) {
            ctx->pc = 0x2C0CB0u;
            goto label_2c0cb0;
        }
    }
    ctx->pc = 0x2C0C4Cu;
    // 0x2c0c4c: 0x0  nop
    ctx->pc = 0x2c0c4cu;
    // NOP
label_2c0c50:
    // 0x2c0c50: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x2c0c50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x2c0c54: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2c0c54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2c0c58: 0xc0414d0  jal         func_105340
    ctx->pc = 0x2C0C58u;
    SET_GPR_U32(ctx, 31, 0x2C0C60u);
    ctx->pc = 0x2C0C5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C0C58u;
    // 0x2c0c5c: 0x26660020  addiu       $a2, $s3, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x2C0C58u, 0x2C0C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C0C60u;
label_2c0c60:
    // 0x2c0c60: 0x27b60088  addiu       $s6, $sp, 0x88
    ctx->pc = 0x2c0c60u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    // 0x2c0c64: 0xc6cd0000  lwc1        $f13, 0x0($s6)
    ctx->pc = 0x2c0c64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2c0c68: 0xc047b88  jal         func_11EE20
    ctx->pc = 0x2C0C68u;
    SET_GPR_U32(ctx, 31, 0x2C0C70u);
    ctx->pc = 0x2C0C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C0C68u;
    // 0x2c0c6c: 0xc7ac0080  lwc1        $f12, 0x80($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EE20u, 0x2C0C68u, 0x2C0C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C0C70u;
label_2c0c70:
    // 0x2c0c70: 0x3c034422  lui         $v1, 0x4422
    ctx->pc = 0x2c0c70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17442 << 16));
    // 0x2c0c74: 0x866200c2  lh          $v0, 0xC2($s3)
    ctx->pc = 0x2c0c74u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 194)));
    // 0x2c0c78: 0x3463f983  ori         $v1, $v1, 0xF983
    ctx->pc = 0x2c0c78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)63875);
    // 0x2c0c7c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2c0c7cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c0c80: 0x0  nop
    ctx->pc = 0x2c0c80u;
    // NOP
    // 0x2c0c84: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2c0c84u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c0c88: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2c0c88u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2c0c8c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x2c0c8cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2c0c90: 0x0  nop
    ctx->pc = 0x2c0c90u;
    // NOP
    // 0x2c0c94: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x2c0c94u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2c0c98: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x2c0c98u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x2c0c9c: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x2c0c9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x2c0ca0: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x2c0ca0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x2c0ca4: 0x2021023  subu        $v0, $s0, $v0
    ctx->pc = 0x2c0ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2c0ca8: 0x2863c  dsll32      $s0, $v0, 24
    ctx->pc = 0x2c0ca8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 24));
    // 0x2c0cac: 0x10863f  dsra32      $s0, $s0, 24
    ctx->pc = 0x2c0cacu;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 24));
label_2c0cb0:
    // 0x2c0cb0: 0x10263c  dsll32      $a0, $s0, 24
    ctx->pc = 0x2c0cb0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 24));
    // 0x2c0cb4: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x2c0cb4u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    // 0x2c0cb8: 0x4810002  bgez        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2C0CB8u;
    {
        const bool branch_taken_0x2c0cb8 = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x2C0CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0CB8u;
        // 0x2c0cbc: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0cb8) {
            ctx->pc = 0x2C0CC4u;
            goto label_2c0cc4;
        }
    }
    ctx->pc = 0x2C0CC0u;
    // 0x2c0cc0: 0x41823  negu        $v1, $a0
    ctx->pc = 0x2c0cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
label_2c0cc4:
    // 0x2c0cc4: 0x82420003  lb          $v0, 0x3($s2)
    ctx->pc = 0x2c0cc4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
    // 0x2c0cc8: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x2c0cc8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2c0ccc: 0x14200026  bnez        $at, . + 4 + (0x26 << 2)
    ctx->pc = 0x2C0CCCu;
    {
        const bool branch_taken_0x2c0ccc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c0ccc) {
            ctx->pc = 0x2C0D68u;
            goto label_2c0d68;
        }
    }
    ctx->pc = 0x2C0CD4u;
    // 0x2c0cd4: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x2c0cd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c0cd8: 0x96420004  lhu         $v0, 0x4($s2)
    ctx->pc = 0x2c0cd8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2c0cdc: 0xc6c10000  lwc1        $f1, 0x0($s6)
    ctx->pc = 0x2c0cdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c0ce0: 0x4600001a  mula.s      $f0, $f0
    ctx->pc = 0x2c0ce0u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[0], ctx->f[0]));
    // 0x2c0ce4: 0x4601081c  madd.s      $f0, $f1, $f1
    ctx->pc = 0x2c0ce4u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[1], ctx->f[1]));
    // 0x2c0ce8: 0x46000044  c1          0x44
    ctx->pc = 0x2c0ce8u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x2c0cec: 0x0  nop
    ctx->pc = 0x2c0cecu;
    // NOP
    // 0x2c0cf0: 0x0  nop
    ctx->pc = 0x2c0cf0u;
    // NOP
    // 0x2c0cf4: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C0CF4u;
    {
        const bool branch_taken_0x2c0cf4 = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x2c0cf4) {
            ctx->pc = 0x2C0D08u;
            goto label_2c0d08;
        }
    }
    ctx->pc = 0x2C0CFCu;
    // 0x2c0cfc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c0cfcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c0d00: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2C0D00u;
    {
        const bool branch_taken_0x2c0d00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C0D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0D00u;
        // 0x2c0d04: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0d00) {
            ctx->pc = 0x2C0D24u;
            goto label_2c0d24;
        }
    }
    ctx->pc = 0x2C0D08u;
label_2c0d08:
    // 0x2c0d08: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x2c0d08u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x2c0d0c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2c0d0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2c0d10: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2c0d10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2c0d14: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c0d14u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c0d18: 0x0  nop
    ctx->pc = 0x2c0d18u;
    // NOP
    // 0x2c0d1c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c0d1cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c0d20: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2c0d20u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2c0d24:
    // 0x2c0d24: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2c0d24u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c0d28: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x2C0D28u;
    {
        const bool branch_taken_0x2c0d28 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c0d28) {
            ctx->pc = 0x2C0D68u;
            goto label_2c0d68;
        }
    }
    ctx->pc = 0x2C0D30u;
    // 0x2c0d30: 0x4810002  bgez        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2C0D30u;
    {
        const bool branch_taken_0x2c0d30 = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x2C0D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0D30u;
        // 0x2c0d34: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0d30) {
            ctx->pc = 0x2C0D3Cu;
            goto label_2c0d3c;
        }
    }
    ctx->pc = 0x2C0D38u;
    // 0x2c0d38: 0x41823  negu        $v1, $a0
    ctx->pc = 0x2c0d38u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
label_2c0d3c:
    // 0x2c0d3c: 0x82420006  lb          $v0, 0x6($s2)
    ctx->pc = 0x2c0d3cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 6)));
    // 0x2c0d40: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x2c0d40u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2c0d44: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C0D44u;
    {
        const bool branch_taken_0x2c0d44 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C0D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0D44u;
        // 0x2c0d48: 0x24150002  addiu       $s5, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0d44) {
            ctx->pc = 0x2C0D58u;
            goto label_2c0d58;
        }
    }
    ctx->pc = 0x2C0D4Cu;
    // 0x2c0d4c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2C0D4Cu;
    {
        const bool branch_taken_0x2c0d4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c0d4c) {
            ctx->pc = 0x2C0D68u;
            goto label_2c0d68;
        }
    }
    ctx->pc = 0x2C0D54u;
    // 0x2c0d54: 0x0  nop
    ctx->pc = 0x2c0d54u;
    // NOP
label_2c0d58:
    // 0x2c0d58: 0x18800003  blez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C0D58u;
    {
        const bool branch_taken_0x2c0d58 = (GPR_S64(ctx, 4) <= 0);
        ctx->pc = 0x2C0D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0D58u;
        // 0x2c0d5c: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0d58) {
            ctx->pc = 0x2C0D68u;
            goto label_2c0d68;
        }
    }
    ctx->pc = 0x2C0D60u;
    // 0x2c0d60: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x2C0D60u;
    {
        const bool branch_taken_0x2c0d60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C0D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0D60u;
        // 0x2c0d64: 0x24150003  addiu       $s5, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0d60) {
            ctx->pc = 0x2C0D68u;
            goto label_2c0d68;
        }
    }
    ctx->pc = 0x2C0D68u;
label_2c0d68:
    // 0x2c0d68: 0x12a0001f  beqz        $s5, . + 4 + (0x1F << 2)
    ctx->pc = 0x2C0D68u;
    {
        const bool branch_taken_0x2c0d68 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C0D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0D68u;
        // 0x2c0d6c: 0x2b21821  addu        $v1, $s5, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0d68) {
            ctx->pc = 0x2C0DE8u;
            goto label_2c0de8;
        }
    }
    ctx->pc = 0x2C0D70u;
    // 0x2c0d70: 0x938289d0  lbu         $v0, -0x7630($gp)
    ctx->pc = 0x2c0d70u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937040)));
    // 0x2c0d74: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2C0D74u;
    {
        const bool branch_taken_0x2c0d74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C0D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0D74u;
        // 0x2c0d78: 0x90650006  lbu         $a1, 0x6($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0d74) {
            ctx->pc = 0x2C0DD0u;
            goto label_2c0dd0;
        }
    }
    ctx->pc = 0x2C0D7Cu;
    // 0x2c0d7c: 0x10a0000e  beqz        $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x2C0D7Cu;
    {
        const bool branch_taken_0x2c0d7c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C0D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0D7Cu;
        // 0x2c0d80: 0xa280004f  sb          $zero, 0x4F($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 79), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0d7c) {
            ctx->pc = 0x2C0DB8u;
            goto label_2c0db8;
        }
    }
    ctx->pc = 0x2C0D84u;
    // 0x2c0d84: 0x92840037  lbu         $a0, 0x37($s4)
    ctx->pc = 0x2c0d84u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 55)));
    // 0x2c0d88: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x2c0d88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x2c0d8c: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2c0d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2c0d90: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2c0d90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2c0d94: 0xa284004e  sb          $a0, 0x4E($s4)
    ctx->pc = 0x2c0d94u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 78), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c0d98: 0xa2850037  sb          $a1, 0x37($s4)
    ctx->pc = 0x2c0d98u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 55), (uint8_t)GPR_U32(ctx, 5));
    // 0x2c0d9c: 0xa2800032  sb          $zero, 0x32($s4)
    ctx->pc = 0x2c0d9cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 50), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c0da0: 0xa283005f  sb          $v1, 0x5F($s4)
    ctx->pc = 0x2c0da0u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 95), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c0da4: 0xa6800080  sh          $zero, 0x80($s4)
    ctx->pc = 0x2c0da4u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 128), (uint16_t)GPR_U32(ctx, 0));
    // 0x2c0da8: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x2c0da8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2c0dac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c0dacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c0db0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2C0DB0u;
    {
        const bool branch_taken_0x2c0db0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C0DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0DB0u;
        // 0x2c0db4: 0x8c420018  lw          $v0, 0x18($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0db0) {
            ctx->pc = 0x2C0DE0u;
            goto label_2c0de0;
        }
    }
    ctx->pc = 0x2C0DB8u;
label_2c0db8:
    // 0x2c0db8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2c0db8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0dbc: 0xc0b20e4  jal         func_2C8390
    ctx->pc = 0x2C0DBCu;
    SET_GPR_U32(ctx, 31, 0x2C0DC4u);
    ctx->pc = 0x2C0DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C0DBCu;
    // 0x2c0dc0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C8390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8390u, 0x2C0DBCu, 0x2C0DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C0DC4u;
label_2c0dc4:
    // 0x2c0dc4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2C0DC4u;
    {
        const bool branch_taken_0x2c0dc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c0dc4) {
            ctx->pc = 0x2C0DD8u;
            goto label_2c0dd8;
        }
    }
    ctx->pc = 0x2C0DCCu;
    // 0x2c0dcc: 0x0  nop
    ctx->pc = 0x2c0dccu;
    // NOP
label_2c0dd0:
    // 0x2c0dd0: 0xa38589d8  sb          $a1, -0x7628($gp)
    ctx->pc = 0x2c0dd0u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937048), (uint8_t)GPR_U32(ctx, 5));
    // 0x2c0dd4: 0x0  nop
    ctx->pc = 0x2c0dd4u;
    // NOP
label_2c0dd8:
    // 0x2c0dd8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c0dd8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0ddc: 0x0  nop
    ctx->pc = 0x2c0ddcu;
    // NOP
label_2c0de0:
    // 0x2c0de0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2C0DE0u;
    {
        const bool branch_taken_0x2c0de0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c0de0) {
            ctx->pc = 0x2C0DF0u;
            goto label_2c0df0;
        }
    }
    ctx->pc = 0x2C0DE8u;
label_2c0de8:
    // 0x2c0de8: 0x2642000a  addiu       $v0, $s2, 0xA
    ctx->pc = 0x2c0de8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 10));
    // 0x2c0dec: 0x0  nop
    ctx->pc = 0x2c0decu;
    // NOP
label_2c0df0:
    // 0x2c0df0: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2c0df0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2c0df4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2c0df4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2c0df8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2c0df8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c0dfc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2c0dfcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c0e00: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2c0e00u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c0e04: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2c0e04u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c0e08: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c0e08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c0e0c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c0e0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c0e10: 0x3e00008  jr          $ra
    ctx->pc = 0x2C0E10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C0E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0E10u;
        // 0x2c0e14: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C0E10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C0E18u;
}
