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

// Function: sub_001ACDA0
// Address: 0x1acda0 - 0x1ae0fc
void sub_001ACDA0_0x1acda0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001ACDA0_0x1acda0");
#endif

    switch (ctx->pc) {
        case 0x1acdfcu: goto label_1acdfc;
        case 0x1ace34u: goto label_1ace34;
        case 0x1ace70u: goto label_1ace70;
        case 0x1acec0u: goto label_1acec0;
        case 0x1aced4u: goto label_1aced4;
        case 0x1aceecu: goto label_1aceec;
        case 0x1acef8u: goto label_1acef8;
        case 0x1acf14u: goto label_1acf14;
        case 0x1acf3cu: goto label_1acf3c;
        case 0x1acf68u: goto label_1acf68;
        case 0x1ad198u: goto label_1ad198;
        case 0x1ad1c4u: goto label_1ad1c4;
        case 0x1ad1d4u: goto label_1ad1d4;
        case 0x1ad1e8u: goto label_1ad1e8;
        case 0x1ad1f4u: goto label_1ad1f4;
        case 0x1ad218u: goto label_1ad218;
        case 0x1ad258u: goto label_1ad258;
        case 0x1ad26cu: goto label_1ad26c;
        case 0x1ad28cu: goto label_1ad28c;
        case 0x1ad29cu: goto label_1ad29c;
        case 0x1ad2a8u: goto label_1ad2a8;
        case 0x1ad2e0u: goto label_1ad2e0;
        case 0x1ad2f4u: goto label_1ad2f4;
        case 0x1ad318u: goto label_1ad318;
        case 0x1ad32cu: goto label_1ad32c;
        case 0x1ad344u: goto label_1ad344;
        case 0x1ad35cu: goto label_1ad35c;
        case 0x1ad378u: goto label_1ad378;
        case 0x1ad388u: goto label_1ad388;
        case 0x1ad394u: goto label_1ad394;
        case 0x1ad3b8u: goto label_1ad3b8;
        case 0x1ad3f8u: goto label_1ad3f8;
        case 0x1ad40cu: goto label_1ad40c;
        case 0x1ad42cu: goto label_1ad42c;
        case 0x1ad448u: goto label_1ad448;
        case 0x1ad458u: goto label_1ad458;
        case 0x1ad460u: goto label_1ad460;
        case 0x1ad498u: goto label_1ad498;
        case 0x1ad4acu: goto label_1ad4ac;
        case 0x1ad4d0u: goto label_1ad4d0;
        case 0x1ad4e4u: goto label_1ad4e4;
        case 0x1ad4fcu: goto label_1ad4fc;
        case 0x1ad514u: goto label_1ad514;
        case 0x1ad524u: goto label_1ad524;
        case 0x1ad534u: goto label_1ad534;
        case 0x1ad540u: goto label_1ad540;
        case 0x1ad554u: goto label_1ad554;
        case 0x1ad578u: goto label_1ad578;
        case 0x1ad5b8u: goto label_1ad5b8;
        case 0x1ad5ccu: goto label_1ad5cc;
        case 0x1ad604u: goto label_1ad604;
        case 0x1ad620u: goto label_1ad620;
        case 0x1ad630u: goto label_1ad630;
        case 0x1ad640u: goto label_1ad640;
        case 0x1ad648u: goto label_1ad648;
        case 0x1ad680u: goto label_1ad680;
        case 0x1ad694u: goto label_1ad694;
        case 0x1ad6b8u: goto label_1ad6b8;
        case 0x1ad6ccu: goto label_1ad6cc;
        case 0x1ad6e4u: goto label_1ad6e4;
        case 0x1ad6fcu: goto label_1ad6fc;
        case 0x1ad710u: goto label_1ad710;
        case 0x1ad73cu: goto label_1ad73c;
        case 0x1ad774u: goto label_1ad774;
        case 0x1ad7b4u: goto label_1ad7b4;
        case 0x1ad7fcu: goto label_1ad7fc;
        case 0x1ad80cu: goto label_1ad80c;
        case 0x1ad840u: goto label_1ad840;
        case 0x1ad850u: goto label_1ad850;
        case 0x1ad858u: goto label_1ad858;
        case 0x1ad898u: goto label_1ad898;
        case 0x1ad8acu: goto label_1ad8ac;
        case 0x1ad8d0u: goto label_1ad8d0;
        case 0x1ad904u: goto label_1ad904;
        case 0x1ad950u: goto label_1ad950;
        case 0x1ad9a8u: goto label_1ad9a8;
        case 0x1ad9ccu: goto label_1ad9cc;
        case 0x1ad9e8u: goto label_1ad9e8;
        case 0x1ad9f8u: goto label_1ad9f8;
        case 0x1ada2cu: goto label_1ada2c;
        case 0x1ada48u: goto label_1ada48;
        case 0x1ada58u: goto label_1ada58;
        case 0x1ada90u: goto label_1ada90;
        case 0x1adab0u: goto label_1adab0;
        case 0x1adad4u: goto label_1adad4;
        case 0x1adafcu: goto label_1adafc;
        case 0x1adb3cu: goto label_1adb3c;
        case 0x1adb7cu: goto label_1adb7c;
        case 0x1adbc0u: goto label_1adbc0;
        case 0x1adbd0u: goto label_1adbd0;
        case 0x1adbe0u: goto label_1adbe0;
        case 0x1adcc8u: goto label_1adcc8;
        case 0x1add08u: goto label_1add08;
        case 0x1add1cu: goto label_1add1c;
        case 0x1add70u: goto label_1add70;
        case 0x1add94u: goto label_1add94;
        case 0x1addc0u: goto label_1addc0;
        case 0x1ade14u: goto label_1ade14;
        case 0x1ade58u: goto label_1ade58;
        case 0x1ade78u: goto label_1ade78;
        case 0x1adea8u: goto label_1adea8;
        case 0x1adeb8u: goto label_1adeb8;
        case 0x1adeccu: goto label_1adecc;
        case 0x1aded8u: goto label_1aded8;
        case 0x1adf10u: goto label_1adf10;
        case 0x1adf50u: goto label_1adf50;
        case 0x1adf58u: goto label_1adf58;
        case 0x1adf84u: goto label_1adf84;
        case 0x1adfb8u: goto label_1adfb8;
        case 0x1adfc8u: goto label_1adfc8;
        case 0x1adfd0u: goto label_1adfd0;
        case 0x1ae020u: goto label_1ae020;
        case 0x1ae030u: goto label_1ae030;
        case 0x1ae054u: goto label_1ae054;
        case 0x1ae080u: goto label_1ae080;
        case 0x1ae098u: goto label_1ae098;
        default: break;
    }

    ctx->pc = 0x1acda0u;

    // 0x1acda0: 0x27bdfb10  addiu       $sp, $sp, -0x4F0
    ctx->pc = 0x1acda0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966032));
    // 0x1acda4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1acda4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1acda8: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x1acda8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x1acdac: 0x2407000e  addiu       $a3, $zero, 0xE
    ctx->pc = 0x1acdacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1acdb0: 0x7fb700a0  sq          $s7, 0xA0($sp)
    ctx->pc = 0x1acdb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 23));
    // 0x1acdb4: 0x7fb60090  sq          $s6, 0x90($sp)
    ctx->pc = 0x1acdb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 22));
    // 0x1acdb8: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x1acdb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
    // 0x1acdbc: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x1acdbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x1acdc0: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x1acdc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x1acdc4: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x1acdc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x1acdc8: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1acdc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x1acdcc: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1acdccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1acdd0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1acdd0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1acdd4: 0xe7ba0028  swc1        $f26, 0x28($sp)
    ctx->pc = 0x1acdd4u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x1acdd8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1acdd8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1acddc: 0xe7b90024  swc1        $f25, 0x24($sp)
    ctx->pc = 0x1acddcu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x1acde0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1acde0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1acde4: 0xe7b80020  swc1        $f24, 0x20($sp)
    ctx->pc = 0x1acde4u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1acde8: 0xe7b7001c  swc1        $f23, 0x1C($sp)
    ctx->pc = 0x1acde8u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x1acdec: 0xe7b60018  swc1        $f22, 0x18($sp)
    ctx->pc = 0x1acdecu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x1acdf0: 0xe7b50014  swc1        $f21, 0x14($sp)
    ctx->pc = 0x1acdf0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1acdf4: 0xc06983c  jal         func_1A60F0
    ctx->pc = 0x1ACDF4u;
    SET_GPR_U32(ctx, 31, 0x1ACDFCu);
    ctx->pc = 0x1ACDF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ACDF4u;
    // 0x1acdf8: 0xe7b40010  swc1        $f20, 0x10($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A60F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A60F0u, 0x1ACDF4u, 0x1ACDFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACDFCu;
label_1acdfc:
    // 0x1acdfc: 0xc6030010  lwc1        $f3, 0x10($s0)
    ctx->pc = 0x1acdfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1ace00: 0x3c0243b4  lui         $v0, 0x43B4
    ctx->pc = 0x1ace00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17332 << 16));
    // 0x1ace04: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1ace04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1ace08: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1ace08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x1ace0c: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x1ace0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1ace10: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1ace10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1ace14: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x1ace14u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x1ace18: 0x46021883  div.s       $f2, $f3, $f2
    ctx->pc = 0x1ace18u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[3], ctx->f[2]); }
    // 0x1ace1c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1ace1cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ace20: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ace20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ace24: 0x0  nop
    ctx->pc = 0x1ace24u;
    // NOP
    // 0x1ace28: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1ace28u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1ace2c: 0xc047b2c  jal         func_11ECB0
    ctx->pc = 0x1ACE2Cu;
    SET_GPR_U32(ctx, 31, 0x1ACE34u);
    ctx->pc = 0x1ACE30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ACE2Cu;
    // 0x1ace30: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11ECB0u, 0x1ACE2Cu, 0x1ACE34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACE34u;
label_1ace34:
    // 0x1ace34: 0xe6000070  swc1        $f0, 0x70($s0)
    ctx->pc = 0x1ace34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    // 0x1ace38: 0x3c0243b4  lui         $v0, 0x43B4
    ctx->pc = 0x1ace38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17332 << 16));
    // 0x1ace3c: 0xc6030010  lwc1        $f3, 0x10($s0)
    ctx->pc = 0x1ace3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1ace40: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x1ace40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x1ace44: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1ace44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1ace48: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1ace48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x1ace4c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1ace4cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ace50: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1ace50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1ace54: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ace54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ace58: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x1ace58u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x1ace5c: 0x46021883  div.s       $f2, $f3, $f2
    ctx->pc = 0x1ace5cu;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[3], ctx->f[2]); }
    // 0x1ace60: 0x0  nop
    ctx->pc = 0x1ace60u;
    // NOP
    // 0x1ace64: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1ace64u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1ace68: 0xc047a98  jal         func_11EA60
    ctx->pc = 0x1ACE68u;
    SET_GPR_U32(ctx, 31, 0x1ACE70u);
    ctx->pc = 0x1ACE6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ACE68u;
    // 0x1ace6c: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EA60u, 0x1ACE68u, 0x1ACE70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACE70u;
label_1ace70:
    // 0x1ace70: 0xe6000078  swc1        $f0, 0x78($s0)
    ctx->pc = 0x1ace70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
    // 0x1ace74: 0x3c0243b4  lui         $v0, 0x43B4
    ctx->pc = 0x1ace74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17332 << 16));
    // 0x1ace78: 0xc6030014  lwc1        $f3, 0x14($s0)
    ctx->pc = 0x1ace78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1ace7c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1ace7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1ace80: 0xc6050070  lwc1        $f5, 0x70($s0)
    ctx->pc = 0x1ace80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1ace84: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1ace84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x1ace88: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1ace88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1ace8c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ace8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ace90: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x1ace90u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x1ace94: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1ace94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1ace98: 0x46021883  div.s       $f2, $f3, $f2
    ctx->pc = 0x1ace98u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[3], ctx->f[2]); }
    // 0x1ace9c: 0xc6040078  lwc1        $f4, 0x78($s0)
    ctx->pc = 0x1ace9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1acea0: 0x4605281a  mula.s      $f5, $f5
    ctx->pc = 0x1acea0u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[5], ctx->f[5]));
    // 0x1acea4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1acea4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1acea8: 0x4604211c  madd.s      $f4, $f4, $f4
    ctx->pc = 0x1acea8u;
    ctx->f[4] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x1aceac: 0x46040504  c1          0x40504
    ctx->pc = 0x1aceacu;
    ctx->f[20] = FPU_SQRT_S(ctx->f[4]);
    // 0x1aceb0: 0x0  nop
    ctx->pc = 0x1aceb0u;
    // NOP
    // 0x1aceb4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1aceb4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1aceb8: 0xc047b5a  jal         func_11ED68
    ctx->pc = 0x1ACEB8u;
    SET_GPR_U32(ctx, 31, 0x1ACEC0u);
    ctx->pc = 0x1ACEBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ACEB8u;
    // 0x1acebc: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11ED68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11ED68u, 0x1ACEB8u, 0x1ACEC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACEC0u;
label_1acec0:
    // 0x1acec0: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1acec0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x1acec4: 0x26040070  addiu       $a0, $s0, 0x70
    ctx->pc = 0x1acec4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    // 0x1acec8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1acec8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1acecc: 0xc041472  jal         func_1051C8
    ctx->pc = 0x1ACECCu;
    SET_GPR_U32(ctx, 31, 0x1ACED4u);
    ctx->pc = 0x1ACED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ACECCu;
    // 0x1aced0: 0xe6000074  swc1        $f0, 0x74($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051C8u, 0x1ACECCu, 0x1ACED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACED4u;
label_1aced4:
    // 0x1aced4: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x1aced4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x1aced8: 0x27a404e0  addiu       $a0, $sp, 0x4E0
    ctx->pc = 0x1aced8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1248));
    // 0x1acedc: 0x24a56aa0  addiu       $a1, $a1, 0x6AA0
    ctx->pc = 0x1acedcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27296));
    // 0x1acee0: 0x26060070  addiu       $a2, $s0, 0x70
    ctx->pc = 0x1acee0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    // 0x1acee4: 0xc041442  jal         func_105108
    ctx->pc = 0x1ACEE4u;
    SET_GPR_U32(ctx, 31, 0x1ACEECu);
    ctx->pc = 0x1ACEE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ACEE4u;
    // 0x1acee8: 0xae00007c  sw          $zero, 0x7C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x1ACEE4u, 0x1ACEECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACEECu;
label_1aceec:
    // 0x1aceec: 0x27a404e0  addiu       $a0, $sp, 0x4E0
    ctx->pc = 0x1aceecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1248));
    // 0x1acef0: 0xc041472  jal         func_1051C8
    ctx->pc = 0x1ACEF0u;
    SET_GPR_U32(ctx, 31, 0x1ACEF8u);
    ctx->pc = 0x1ACEF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ACEF0u;
    // 0x1acef4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051C8u, 0x1ACEF0u, 0x1ACEF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACEF8u;
label_1acef8:
    // 0x1acef8: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x1acef8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x1acefc: 0x27a404d0  addiu       $a0, $sp, 0x4D0
    ctx->pc = 0x1acefcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1232));
    // 0x1acf00: 0x2442f410  addiu       $v0, $v0, -0xBF0
    ctx->pc = 0x1acf00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964240));
    // 0x1acf04: 0x27a504e0  addiu       $a1, $sp, 0x4E0
    ctx->pc = 0x1acf04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1248));
    // 0x1acf08: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x1acf08u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x40F410u));
    // 0x1acf0c: 0xc041468  jal         func_1051A0
    ctx->pc = 0x1ACF0Cu;
    SET_GPR_U32(ctx, 31, 0x1ACF14u);
    ctx->pc = 0x1ACF10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ACF0Cu;
    // 0x1acf10: 0x7c820000  sq          $v0, 0x0($a0) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051A0u, 0x1ACF0Cu, 0x1ACF14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACF14u;
label_1acf14:
    // 0x1acf14: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1acf14u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x1acf18: 0x27a304c0  addiu       $v1, $sp, 0x4C0
    ctx->pc = 0x1acf18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1216));
    // 0x1acf1c: 0x27a204e0  addiu       $v0, $sp, 0x4E0
    ctx->pc = 0x1acf1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 1248));
    // 0x1acf20: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x1acf20u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1acf24: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1acf24u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1acf28: 0x27a404c0  addiu       $a0, $sp, 0x4C0
    ctx->pc = 0x1acf28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1216));
    // 0x1acf2c: 0x27a504c0  addiu       $a1, $sp, 0x4C0
    ctx->pc = 0x1acf2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1216));
    // 0x1acf30: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x1acf30u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x1acf34: 0xc041472  jal         func_1051C8
    ctx->pc = 0x1ACF34u;
    SET_GPR_U32(ctx, 31, 0x1ACF3Cu);
    ctx->pc = 0x1ACF38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ACF34u;
    // 0x1acf38: 0xe7a004c4  swc1        $f0, 0x4C4($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1220), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051C8u, 0x1ACF34u, 0x1ACF3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACF3Cu;
label_1acf3c:
    // 0x1acf3c: 0xc7a104e0  lwc1        $f1, 0x4E0($sp)
    ctx->pc = 0x1acf3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1acf40: 0x27a404c0  addiu       $a0, $sp, 0x4C0
    ctx->pc = 0x1acf40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1216));
    // 0x1acf44: 0xc7a004e8  lwc1        $f0, 0x4E8($sp)
    ctx->pc = 0x1acf44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1acf48: 0x27a504d0  addiu       $a1, $sp, 0x4D0
    ctx->pc = 0x1acf48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1232));
    // 0x1acf4c: 0x4601081a  mula.s      $f1, $f1
    ctx->pc = 0x1acf4cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[1], ctx->f[1]));
    // 0x1acf50: 0x4600001c  madd.s      $f0, $f0, $f0
    ctx->pc = 0x1acf50u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[0]));
    // 0x1acf54: 0x46000544  c1          0x544
    ctx->pc = 0x1acf54u;
    ctx->f[21] = FPU_SQRT_S(ctx->f[0]);
    // 0x1acf58: 0x0  nop
    ctx->pc = 0x1acf58u;
    // NOP
    // 0x1acf5c: 0x0  nop
    ctx->pc = 0x1acf5cu;
    // NOP
    // 0x1acf60: 0xc041468  jal         func_1051A0
    ctx->pc = 0x1ACF60u;
    SET_GPR_U32(ctx, 31, 0x1ACF68u);
    ctx->pc = 0x1051A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051A0u, 0x1ACF60u, 0x1ACF68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACF68u;
label_1acf68:
    // 0x1acf68: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x1acf68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x1acf6c: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1ACF6Cu;
    {
        const bool branch_taken_0x1acf6c = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x1ACF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACF6Cu;
        // 0x1acf70: 0x46150002  mul.s       $f0, $f0, $f21 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acf6c) {
            ctx->pc = 0x1ACF80u;
            goto label_1acf80;
        }
    }
    ctx->pc = 0x1ACF74u;
    // 0x1acf74: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1acf74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1acf78: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1ACF78u;
    {
        const bool branch_taken_0x1acf78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACF78u;
        // 0x1acf7c: 0x46800920  cvt.s.w     $f4, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acf78) {
            ctx->pc = 0x1ACF9Cu;
            goto label_1acf9c;
        }
    }
    ctx->pc = 0x1ACF80u;
label_1acf80:
    // 0x1acf80: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1acf80u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1acf84: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1acf84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1acf88: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1acf88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1acf8c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1acf8cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1acf90: 0x0  nop
    ctx->pc = 0x1acf90u;
    // NOP
    // 0x1acf94: 0x46800920  cvt.s.w     $f4, $f1
    ctx->pc = 0x1acf94u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x1acf98: 0x46042100  add.s       $f4, $f4, $f4
    ctx->pc = 0x1acf98u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[4]);
label_1acf9c:
    // 0x1acf9c: 0xc6020030  lwc1        $f2, 0x30($s0)
    ctx->pc = 0x1acf9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1acfa0: 0x3c02459c  lui         $v0, 0x459C
    ctx->pc = 0x1acfa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17820 << 16));
    // 0x1acfa4: 0xc7a304e4  lwc1        $f3, 0x4E4($sp)
    ctx->pc = 0x1acfa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1acfa8: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x1acfa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x1acfac: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1acfacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1acfb0: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x1acfb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x1acfb4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1acfb4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1acfb8: 0x4604181a  mula.s      $f3, $f4
    ctx->pc = 0x1acfb8u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[3], ctx->f[4]));
    // 0x1acfbc: 0x4614109c  madd.s      $f2, $f2, $f20
    ctx->pc = 0x1acfbcu;
    ctx->f[2] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[20]));
    // 0x1acfc0: 0x46011643  div.s       $f25, $f2, $f1
    ctx->pc = 0x1acfc0u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[25] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x1acfc4: 0x0  nop
    ctx->pc = 0x1acfc4u;
    // NOP
    // 0x1acfc8: 0x0  nop
    ctx->pc = 0x1acfc8u;
    // NOP
    // 0x1acfcc: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1ACFCCu;
    {
        const bool branch_taken_0x1acfcc = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x1acfcc) {
            ctx->pc = 0x1ACFE0u;
            goto label_1acfe0;
        }
    }
    ctx->pc = 0x1ACFD4u;
    // 0x1acfd4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1acfd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1acfd8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1ACFD8u;
    {
        const bool branch_taken_0x1acfd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACFD8u;
        // 0x1acfdc: 0x46800920  cvt.s.w     $f4, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acfd8) {
            ctx->pc = 0x1ACFFCu;
            goto label_1acffc;
        }
    }
    ctx->pc = 0x1ACFE0u;
label_1acfe0:
    // 0x1acfe0: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1acfe0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1acfe4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1acfe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1acfe8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1acfe8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1acfec: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1acfecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1acff0: 0x0  nop
    ctx->pc = 0x1acff0u;
    // NOP
    // 0x1acff4: 0x46800920  cvt.s.w     $f4, $f1
    ctx->pc = 0x1acff4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x1acff8: 0x46042100  add.s       $f4, $f4, $f4
    ctx->pc = 0x1acff8u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[4]);
label_1acffc:
    // 0x1acffc: 0xc6020030  lwc1        $f2, 0x30($s0)
    ctx->pc = 0x1acffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1ad000: 0x3c02459c  lui         $v0, 0x459C
    ctx->pc = 0x1ad000u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17820 << 16));
    // 0x1ad004: 0xc7a304e4  lwc1        $f3, 0x4E4($sp)
    ctx->pc = 0x1ad004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1ad008: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x1ad008u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x1ad00c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ad00cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ad010: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x1ad010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x1ad014: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1ad014u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1ad018: 0x4604181a  mula.s      $f3, $f4
    ctx->pc = 0x1ad018u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[3], ctx->f[4]));
    // 0x1ad01c: 0x4614109d  msub.s      $f2, $f2, $f20
    ctx->pc = 0x1ad01cu;
    ctx->f[2] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[20]));
    // 0x1ad020: 0x46011603  div.s       $f24, $f2, $f1
    ctx->pc = 0x1ad020u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[24] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x1ad024: 0x0  nop
    ctx->pc = 0x1ad024u;
    // NOP
    // 0x1ad028: 0x0  nop
    ctx->pc = 0x1ad028u;
    // NOP
    // 0x1ad02c: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AD02Cu;
    {
        const bool branch_taken_0x1ad02c = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x1ad02c) {
            ctx->pc = 0x1AD040u;
            goto label_1ad040;
        }
    }
    ctx->pc = 0x1AD034u;
    // 0x1ad034: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ad034u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ad038: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1AD038u;
    {
        const bool branch_taken_0x1ad038 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD038u;
        // 0x1ad03c: 0x46800920  cvt.s.w     $f4, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad038) {
            ctx->pc = 0x1AD05Cu;
            goto label_1ad05c;
        }
    }
    ctx->pc = 0x1AD040u;
label_1ad040:
    // 0x1ad040: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1ad040u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1ad044: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1ad044u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1ad048: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1ad048u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1ad04c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1ad04cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ad050: 0x0  nop
    ctx->pc = 0x1ad050u;
    // NOP
    // 0x1ad054: 0x46800920  cvt.s.w     $f4, $f1
    ctx->pc = 0x1ad054u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x1ad058: 0x46042100  add.s       $f4, $f4, $f4
    ctx->pc = 0x1ad058u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[4]);
label_1ad05c:
    // 0x1ad05c: 0xc6020030  lwc1        $f2, 0x30($s0)
    ctx->pc = 0x1ad05cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1ad060: 0x3c02459c  lui         $v0, 0x459C
    ctx->pc = 0x1ad060u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17820 << 16));
    // 0x1ad064: 0xc7a304e0  lwc1        $f3, 0x4E0($sp)
    ctx->pc = 0x1ad064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1ad068: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x1ad068u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x1ad06c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ad06cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ad070: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x1ad070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x1ad074: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1ad074u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1ad078: 0x4604181a  mula.s      $f3, $f4
    ctx->pc = 0x1ad078u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[3], ctx->f[4]));
    // 0x1ad07c: 0x4600109c  madd.s      $f2, $f2, $f0
    ctx->pc = 0x1ad07cu;
    ctx->f[2] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[0]));
    // 0x1ad080: 0x460115c3  div.s       $f23, $f2, $f1
    ctx->pc = 0x1ad080u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[23] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x1ad084: 0x0  nop
    ctx->pc = 0x1ad084u;
    // NOP
    // 0x1ad088: 0x0  nop
    ctx->pc = 0x1ad088u;
    // NOP
    // 0x1ad08c: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AD08Cu;
    {
        const bool branch_taken_0x1ad08c = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x1ad08c) {
            ctx->pc = 0x1AD0A0u;
            goto label_1ad0a0;
        }
    }
    ctx->pc = 0x1AD094u;
    // 0x1ad094: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ad094u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ad098: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1AD098u;
    {
        const bool branch_taken_0x1ad098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD098u;
        // 0x1ad09c: 0x46800960  cvt.s.w     $f5, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad098) {
            ctx->pc = 0x1AD0BCu;
            goto label_1ad0bc;
        }
    }
    ctx->pc = 0x1AD0A0u;
label_1ad0a0:
    // 0x1ad0a0: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1ad0a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1ad0a4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1ad0a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1ad0a8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1ad0a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1ad0ac: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1ad0acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ad0b0: 0x0  nop
    ctx->pc = 0x1ad0b0u;
    // NOP
    // 0x1ad0b4: 0x46800960  cvt.s.w     $f5, $f1
    ctx->pc = 0x1ad0b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x1ad0b8: 0x46052940  add.s       $f5, $f5, $f5
    ctx->pc = 0x1ad0b8u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[5]);
label_1ad0bc:
    // 0x1ad0bc: 0xc6030030  lwc1        $f3, 0x30($s0)
    ctx->pc = 0x1ad0bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1ad0c0: 0x3c02459c  lui         $v0, 0x459C
    ctx->pc = 0x1ad0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17820 << 16));
    // 0x1ad0c4: 0xc7a404e0  lwc1        $f4, 0x4E0($sp)
    ctx->pc = 0x1ad0c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1ad0c8: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x1ad0c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x1ad0cc: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1ad0ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ad0d0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1ad0d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1ad0d4: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x1ad0d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ad0d8: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x1ad0d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x1ad0dc: 0x4605201a  mula.s      $f4, $f5
    ctx->pc = 0x1ad0dcu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[4], ctx->f[5]));
    // 0x1ad0e0: 0x4600181d  msub.s      $f0, $f3, $f0
    ctx->pc = 0x1ad0e0u;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[0]));
    // 0x1ad0e4: 0x46020583  div.s       $f22, $f0, $f2
    ctx->pc = 0x1ad0e4u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[22] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x1ad0e8: 0x0  nop
    ctx->pc = 0x1ad0e8u;
    // NOP
    // 0x1ad0ec: 0x0  nop
    ctx->pc = 0x1ad0ecu;
    // NOP
    // 0x1ad0f0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1AD0F0u;
    {
        const bool branch_taken_0x1ad0f0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ad0f0) {
            ctx->pc = 0x1AD100u;
            goto label_1ad100;
        }
    }
    ctx->pc = 0x1AD0F8u;
    // 0x1ad0f8: 0x46000d06  mov.s       $f20, $f1
    ctx->pc = 0x1ad0f8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[1]);
    // 0x1ad0fc: 0x0  nop
    ctx->pc = 0x1ad0fcu;
    // NOP
label_1ad100:
    // 0x1ad100: 0x92020034  lbu         $v0, 0x34($s0)
    ctx->pc = 0x1ad100u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x1ad104: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AD104u;
    {
        const bool branch_taken_0x1ad104 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x1AD108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD104u;
        // 0x1ad108: 0x92040035  lbu         $a0, 0x35($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 53)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad104) {
            ctx->pc = 0x1AD118u;
            goto label_1ad118;
        }
    }
    ctx->pc = 0x1AD10Cu;
    // 0x1ad10c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ad10cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ad110: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1AD110u;
    {
        const bool branch_taken_0x1ad110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD110u;
        // 0x1ad114: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad110) {
            ctx->pc = 0x1AD134u;
            goto label_1ad134;
        }
    }
    ctx->pc = 0x1AD118u;
label_1ad118:
    // 0x1ad118: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1ad118u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1ad11c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1ad11cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1ad120: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1ad120u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1ad124: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ad124u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ad128: 0x0  nop
    ctx->pc = 0x1ad128u;
    // NOP
    // 0x1ad12c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ad12cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1ad130: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1ad130u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1ad134:
    // 0x1ad134: 0x4600a042  mul.s       $f1, $f20, $f0
    ctx->pc = 0x1ad134u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x1ad138: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1ad138u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x1ad13c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ad13cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ad140: 0x0  nop
    ctx->pc = 0x1ad140u;
    // NOP
    // 0x1ad144: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1ad144u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ad148: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x1AD148u;
    {
        const bool branch_taken_0x1ad148 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ad148) {
            ctx->pc = 0x1AD160u;
            goto label_1ad160;
        }
    }
    ctx->pc = 0x1AD150u;
    // 0x1ad150: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1ad150u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1ad154: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x1ad154u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1ad158: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1AD158u;
    {
        const bool branch_taken_0x1ad158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD158u;
        // 0x1ad15c: 0x83b821  addu        $s7, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad158) {
            ctx->pc = 0x1AD17Cu;
            goto label_1ad17c;
        }
    }
    ctx->pc = 0x1AD160u;
label_1ad160:
    // 0x1ad160: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1ad160u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1ad164: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1ad164u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1ad168: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1ad168u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1ad16c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x1ad16cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1ad170: 0x0  nop
    ctx->pc = 0x1ad170u;
    // NOP
    // 0x1ad174: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1ad174u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1ad178: 0x83b821  addu        $s7, $a0, $v1
    ctx->pc = 0x1ad178u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1ad17c:
    // 0x1ad17c: 0x2ee10100  sltiu       $at, $s7, 0x100
    ctx->pc = 0x1ad17cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x1ad180: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AD180u;
    {
        const bool branch_taken_0x1ad180 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ad180) {
            ctx->pc = 0x1AD190u;
            goto label_1ad190;
        }
    }
    ctx->pc = 0x1AD188u;
    // 0x1ad188: 0x241700ff  addiu       $s7, $zero, 0xFF
    ctx->pc = 0x1ad188u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1ad18c: 0x0  nop
    ctx->pc = 0x1ad18cu;
    // NOP
label_1ad190:
    // 0x1ad190: 0xc0705dc  jal         func_1C1770
    ctx->pc = 0x1AD190u;
    SET_GPR_U32(ctx, 31, 0x1AD198u);
    ctx->pc = 0x1AD194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD190u;
    // 0x1ad194: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1770u, 0x1AD190u, 0x1AD198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD198u;
label_1ad198:
    // 0x1ad198: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x1ad198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x1ad19c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1ad19cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad1a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ad1a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad1a4: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1ad1a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1ad1a8: 0x24070100  addiu       $a3, $zero, 0x100
    ctx->pc = 0x1ad1a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1ad1ac: 0x24080070  addiu       $t0, $zero, 0x70
    ctx->pc = 0x1ad1acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x1ad1b0: 0x24090200  addiu       $t1, $zero, 0x200
    ctx->pc = 0x1ad1b0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x1ad1b4: 0x240a00e0  addiu       $t2, $zero, 0xE0
    ctx->pc = 0x1ad1b4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x1ad1b8: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x1ad1b8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ad1bc: 0xc06afc4  jal         func_1ABF10
    ctx->pc = 0x1AD1BCu;
    SET_GPR_U32(ctx, 31, 0x1AD1C4u);
    ctx->pc = 0x1AD1C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD1BCu;
    // 0x1ad1c0: 0xffa00008  sd          $zero, 0x8($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ABF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ABF10u, 0x1AD1BCu, 0x1AD1C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD1C4u;
label_1ad1c4:
    // 0x1ad1c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ad1c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad1c8: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x1ad1c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1ad1cc: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AD1CCu;
    SET_GPR_U32(ctx, 31, 0x1AD1D4u);
    ctx->pc = 0x1AD1D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD1CCu;
    // 0x1ad1d0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AD1CCu, 0x1AD1D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD1D4u;
label_1ad1d4:
    // 0x1ad1d4: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x1ad1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1ad1d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ad1d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad1dc: 0x2405003b  addiu       $a1, $zero, 0x3B
    ctx->pc = 0x1ad1dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x1ad1e0: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AD1E0u;
    SET_GPR_U32(ctx, 31, 0x1AD1E8u);
    ctx->pc = 0x1AD1E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD1E0u;
    // 0x1ad1e4: 0x2303c  dsll32      $a2, $v0, 0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AD1E0u, 0x1AD1E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD1E8u;
label_1ad1e8:
    // 0x1ad1e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ad1e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad1ec: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1AD1ECu;
    SET_GPR_U32(ctx, 31, 0x1AD1F4u);
    ctx->pc = 0x1AD1F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD1ECu;
    // 0x1ad1f0: 0x24050100  addiu       $a1, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1AD1ECu, 0x1AD1F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD1F4u;
label_1ad1f4:
    // 0x1ad1f4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1ad1f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ad1f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ad1f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad1fc: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1ad1fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1ad200: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x1ad200u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
    // 0x1ad204: 0x31eb8  dsll        $v1, $v1, 26
    ctx->pc = 0x1ad204u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 26);
    // 0x1ad208: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x1ad208u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x1ad20c: 0x629025  or          $s2, $v1, $v0
    ctx->pc = 0x1ad20cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1ad210: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1AD210u;
    SET_GPR_U32(ctx, 31, 0x1AD218u);
    ctx->pc = 0x1AD214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD210u;
    // 0x1ad214: 0x240500e0  addiu       $a1, $zero, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1AD210u, 0x1AD218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD218u;
label_1ad218:
    // 0x1ad218: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1ad218u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ad21c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1ad21cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1ad220: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1ad220u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1ad224: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1ad224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1ad228: 0x31fb8  dsll        $v1, $v1, 30
    ctx->pc = 0x1ad228u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 30);
    // 0x1ad22c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1ad22cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ad230: 0x2432025  or          $a0, $s2, $v1
    ctx->pc = 0x1ad230u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) | GPR_U64(ctx, 3));
    // 0x1ad234: 0x9e2378d0  lwu         $v1, 0x78D0($s1)
    ctx->pc = 0x1ad234u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 30928)));
    // 0x1ad238: 0x823025  or          $a2, $a0, $v0
    ctx->pc = 0x1ad238u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1ad23c: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1ad23cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1ad240: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ad240u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad244: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1ad244u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ad248: 0x3197c  dsll32      $v1, $v1, 5
    ctx->pc = 0x1ad248u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 5));
    // 0x1ad24c: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1ad24cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1ad250: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AD250u;
    SET_GPR_U32(ctx, 31, 0x1AD258u);
    ctx->pc = 0x1AD254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD250u;
    // 0x1ad254: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AD250u, 0x1AD258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD258u;
label_1ad258:
    // 0x1ad258: 0x3c020204  lui         $v0, 0x204
    ctx->pc = 0x1ad258u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)516 << 16));
    // 0x1ad25c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ad25cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad260: 0x2405004d  addiu       $a1, $zero, 0x4D
    ctx->pc = 0x1ad260u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x1ad264: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AD264u;
    SET_GPR_U32(ctx, 31, 0x1AD26Cu);
    ctx->pc = 0x1AD268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD264u;
    // 0x1ad268: 0x34460090  ori         $a2, $v0, 0x90 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)144);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AD264u, 0x1AD26Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD26Cu;
label_1ad26c:
    // 0x1ad26c: 0x240306fc  addiu       $v1, $zero, 0x6FC
    ctx->pc = 0x1ad26cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1788));
    // 0x1ad270: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x1ad270u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x1ad274: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1ad274u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1ad278: 0x3442c005  ori         $v0, $v0, 0xC005
    ctx->pc = 0x1ad278u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49157);
    // 0x1ad27c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ad27cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad280: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1ad280u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1ad284: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AD284u;
    SET_GPR_U32(ctx, 31, 0x1AD28Cu);
    ctx->pc = 0x1AD288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD284u;
    // 0x1ad288: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AD284u, 0x1AD28Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD28Cu;
label_1ad28c:
    // 0x1ad28c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ad28cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad290: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ad290u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad294: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AD294u;
    SET_GPR_U32(ctx, 31, 0x1AD29Cu);
    ctx->pc = 0x1AD298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD294u;
    // 0x1ad298: 0x24060316  addiu       $a2, $zero, 0x316 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 790));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AD294u, 0x1AD29Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD29Cu;
label_1ad29c:
    // 0x1ad29c: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x1AD29Cu;
    {
        const bool branch_taken_0x1ad29c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD29Cu;
        // 0x1ad2a0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad29c) {
            ctx->pc = 0x1AD348u;
            goto label_1ad348;
        }
    }
    ctx->pc = 0x1AD2A4u;
    // 0x1ad2a4: 0x0  nop
    ctx->pc = 0x1ad2a4u;
    // NOP
label_1ad2a8:
    // 0x1ad2a8: 0x121940  sll         $v1, $s2, 5
    ctx->pc = 0x1ad2a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 5));
    // 0x1ad2ac: 0x2462001f  addiu       $v0, $v1, 0x1F
    ctx->pc = 0x1ad2acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 31));
    // 0x1ad2b0: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x1ad2b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1ad2b4: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x1ad2b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ad2b8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1ad2b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1ad2bc: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1ad2bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1ad2c0: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x1ad2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
    // 0x1ad2c4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1ad2c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1ad2c8: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x1ad2c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x1ad2cc: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1ad2ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1ad2d0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1ad2d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ad2d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ad2d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad2d8: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AD2D8u;
    SET_GPR_U32(ctx, 31, 0x1AD2E0u);
    ctx->pc = 0x1AD2DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD2D8u;
    // 0x1ad2dc: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AD2D8u, 0x1AD2E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD2E0u;
label_1ad2e0:
    // 0x1ad2e0: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1ad2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x1ad2e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ad2e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad2e8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1ad2e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ad2ec: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AD2ECu;
    SET_GPR_U32(ctx, 31, 0x1AD2F4u);
    ctx->pc = 0x1AD2F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD2ECu;
    // 0x1ad2f0: 0x34460008  ori         $a2, $v0, 0x8 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AD2ECu, 0x1AD2F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD2F4u;
label_1ad2f4:
    // 0x1ad2f4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1ad2f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ad2f8: 0x3c027900  lui         $v0, 0x7900
    ctx->pc = 0x1ad2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30976 << 16));
    // 0x1ad2fc: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1ad2fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1ad300: 0x34427080  ori         $v0, $v0, 0x7080
    ctx->pc = 0x1ad300u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28800);
    // 0x1ad304: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1ad304u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1ad308: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ad308u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad30c: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1ad30cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1ad310: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AD310u;
    SET_GPR_U32(ctx, 31, 0x1AD318u);
    ctx->pc = 0x1AD314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD310u;
    // 0x1ad314: 0x70023389  pcpyld      $a2, $zero, $v0 (Delay Slot)
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AD310u, 0x1AD318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD318u;
label_1ad318:
    // 0x1ad318: 0x3c021c09  lui         $v0, 0x1C09
    ctx->pc = 0x1ad318u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7177 << 16));
    // 0x1ad31c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ad31cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad320: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1ad320u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ad324: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AD324u;
    SET_GPR_U32(ctx, 31, 0x1AD32Cu);
    ctx->pc = 0x1AD328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD324u;
    // 0x1ad328: 0x34461009  ori         $a2, $v0, 0x1009 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4105);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AD324u, 0x1AD32Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD32Cu;
label_1ad32c:
    // 0x1ad32c: 0x3c029500  lui         $v0, 0x9500
    ctx->pc = 0x1ad32cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38144 << 16));
    // 0x1ad330: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ad330u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad334: 0x34428080  ori         $v0, $v0, 0x8080
    ctx->pc = 0x1ad334u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    // 0x1ad338: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1ad338u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1ad33c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AD33Cu;
    SET_GPR_U32(ctx, 31, 0x1AD344u);
    ctx->pc = 0x1AD340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD33Cu;
    // 0x1ad340: 0x70023389  pcpyld      $a2, $zero, $v0 (Delay Slot)
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AD33Cu, 0x1AD344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD344u;
label_1ad344:
    // 0x1ad344: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1ad344u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1ad348:
    // 0x1ad348: 0x2e420008  sltiu       $v0, $s2, 0x8
    ctx->pc = 0x1ad348u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x1ad34c: 0x1440ffd6  bnez        $v0, . + 4 + (-0x2A << 2)
    ctx->pc = 0x1AD34Cu;
    {
        const bool branch_taken_0x1ad34c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AD350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD34Cu;
        // 0x1ad350: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad34c) {
            ctx->pc = 0x1AD2A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ad2a8;
        }
    }
    ctx->pc = 0x1AD354u;
    // 0x1ad354: 0xc07088c  jal         func_1C2230
    ctx->pc = 0x1AD354u;
    SET_GPR_U32(ctx, 31, 0x1AD35Cu);
    ctx->pc = 0x1AD358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD354u;
    // 0x1ad358: 0x2405003f  addiu       $a1, $zero, 0x3F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2230u, 0x1AD354u, 0x1AD35Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD35Cu;
label_1ad35c:
    // 0x1ad35c: 0x8e080058  lw          $t0, 0x58($s0)
    ctx->pc = 0x1ad35cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x1ad360: 0x3c127000  lui         $s2, 0x7000
    ctx->pc = 0x1ad360u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)28672 << 16));
    // 0x1ad364: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ad364u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad368: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1ad368u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad36c: 0x26060038  addiu       $a2, $s0, 0x38
    ctx->pc = 0x1ad36cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
    // 0x1ad370: 0xc0706f0  jal         func_1C1BC0
    ctx->pc = 0x1AD370u;
    SET_GPR_U32(ctx, 31, 0x1AD378u);
    ctx->pc = 0x1AD374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD370u;
    // 0x1ad374: 0x26070048  addiu       $a3, $s0, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1BC0u, 0x1AD370u, 0x1AD378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD378u;
label_1ad378:
    // 0x1ad378: 0x8e2578d0  lw          $a1, 0x78D0($s1)
    ctx->pc = 0x1ad378u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 30928)));
    // 0x1ad37c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1ad37cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad380: 0xc070468  jal         func_1C11A0
    ctx->pc = 0x1AD380u;
    SET_GPR_U32(ctx, 31, 0x1AD388u);
    ctx->pc = 0x1AD384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD380u;
    // 0x1ad384: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C11A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C11A0u, 0x1AD380u, 0x1AD388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD388u;
label_1ad388:
    // 0x1ad388: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ad388u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad38c: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1AD38Cu;
    SET_GPR_U32(ctx, 31, 0x1AD394u);
    ctx->pc = 0x1AD390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD38Cu;
    // 0x1ad390: 0x24050100  addiu       $a1, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1AD38Cu, 0x1AD394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD394u;
label_1ad394:
    // 0x1ad394: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1ad394u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ad398: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ad398u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad39c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1ad39cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1ad3a0: 0x3c0201b1  lui         $v0, 0x1B1
    ctx->pc = 0x1ad3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)433 << 16));
    // 0x1ad3a4: 0x31eb8  dsll        $v1, $v1, 26
    ctx->pc = 0x1ad3a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 26);
    // 0x1ad3a8: 0x34421200  ori         $v0, $v0, 0x1200
    ctx->pc = 0x1ad3a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4608);
    // 0x1ad3ac: 0x629025  or          $s2, $v1, $v0
    ctx->pc = 0x1ad3acu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1ad3b0: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1AD3B0u;
    SET_GPR_U32(ctx, 31, 0x1AD3B8u);
    ctx->pc = 0x1AD3B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD3B0u;
    // 0x1ad3b4: 0x24050070  addiu       $a1, $zero, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1AD3B0u, 0x1AD3B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD3B8u;
label_1ad3b8:
    // 0x1ad3b8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1ad3b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ad3bc: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1ad3bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1ad3c0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1ad3c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1ad3c4: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1ad3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1ad3c8: 0x31fb8  dsll        $v1, $v1, 30
    ctx->pc = 0x1ad3c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 30);
    // 0x1ad3cc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1ad3ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ad3d0: 0x2432025  or          $a0, $s2, $v1
    ctx->pc = 0x1ad3d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) | GPR_U64(ctx, 3));
    // 0x1ad3d4: 0x9e2378d0  lwu         $v1, 0x78D0($s1)
    ctx->pc = 0x1ad3d4u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 30928)));
    // 0x1ad3d8: 0x823025  or          $a2, $a0, $v0
    ctx->pc = 0x1ad3d8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1ad3dc: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1ad3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1ad3e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ad3e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad3e4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1ad3e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ad3e8: 0x3197c  dsll32      $v1, $v1, 5
    ctx->pc = 0x1ad3e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 5));
    // 0x1ad3ec: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1ad3ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1ad3f0: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AD3F0u;
    SET_GPR_U32(ctx, 31, 0x1AD3F8u);
    ctx->pc = 0x1AD3F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD3F0u;
    // 0x1ad3f4: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AD3F0u, 0x1AD3F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD3F8u;
label_1ad3f8:
    // 0x1ad3f8: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x1ad3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x1ad3fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ad3fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad400: 0x2405004d  addiu       $a1, $zero, 0x4D
    ctx->pc = 0x1ad400u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x1ad404: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AD404u;
    SET_GPR_U32(ctx, 31, 0x1AD40Cu);
    ctx->pc = 0x1AD408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD404u;
    // 0x1ad408: 0x34460080  ori         $a2, $v0, 0x80 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AD404u, 0x1AD40Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD40Cu;
label_1ad40c:
    // 0x1ad40c: 0x240301bc  addiu       $v1, $zero, 0x1BC
    ctx->pc = 0x1ad40cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 444));
    // 0x1ad410: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x1ad410u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x1ad414: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1ad414u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1ad418: 0x3442c00a  ori         $v0, $v0, 0xC00A
    ctx->pc = 0x1ad418u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49162);
    // 0x1ad41c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ad41cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad420: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1ad420u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1ad424: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AD424u;
    SET_GPR_U32(ctx, 31, 0x1AD42Cu);
    ctx->pc = 0x1AD428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD424u;
    // 0x1ad428: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AD424u, 0x1AD42Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD42Cu;
label_1ad42c:
    // 0x1ad42c: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1ad42cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1ad430: 0x24020089  addiu       $v0, $zero, 0x89
    ctx->pc = 0x1ad430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 137));
    // 0x1ad434: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1ad434u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1ad438: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ad438u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad43c: 0x24050043  addiu       $a1, $zero, 0x43
    ctx->pc = 0x1ad43cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x1ad440: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AD440u;
    SET_GPR_U32(ctx, 31, 0x1AD448u);
    ctx->pc = 0x1AD444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD440u;
    // 0x1ad444: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AD440u, 0x1AD448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD448u;
label_1ad448:
    // 0x1ad448: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ad448u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad44c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ad44cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad450: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AD450u;
    SET_GPR_U32(ctx, 31, 0x1AD458u);
    ctx->pc = 0x1AD454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD450u;
    // 0x1ad454: 0x24060356  addiu       $a2, $zero, 0x356 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 854));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AD450u, 0x1AD458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD458u;
label_1ad458:
    // 0x1ad458: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x1AD458u;
    {
        const bool branch_taken_0x1ad458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD458u;
        // 0x1ad45c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad458) {
            ctx->pc = 0x1AD500u;
            goto label_1ad500;
        }
    }
    ctx->pc = 0x1AD460u;
label_1ad460:
    // 0x1ad460: 0x121980  sll         $v1, $s2, 6
    ctx->pc = 0x1ad460u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
    // 0x1ad464: 0x2462003f  addiu       $v0, $v1, 0x3F
    ctx->pc = 0x1ad464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 63));
    // 0x1ad468: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x1ad468u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1ad46c: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x1ad46cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ad470: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1ad470u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1ad474: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1ad474u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1ad478: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1ad478u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x1ad47c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1ad47cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1ad480: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x1ad480u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x1ad484: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1ad484u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1ad488: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1ad488u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ad48c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ad48cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad490: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AD490u;
    SET_GPR_U32(ctx, 31, 0x1AD498u);
    ctx->pc = 0x1AD494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD490u;
    // 0x1ad494: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AD490u, 0x1AD498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD498u;
label_1ad498:
    // 0x1ad498: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1ad498u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x1ad49c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ad49cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad4a0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1ad4a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ad4a4: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AD4A4u;
    SET_GPR_U32(ctx, 31, 0x1AD4ACu);
    ctx->pc = 0x1AD4A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD4A4u;
    // 0x1ad4a8: 0x34460008  ori         $a2, $v0, 0x8 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AD4A4u, 0x1AD4ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD4ACu;
label_1ad4ac:
    // 0x1ad4ac: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1ad4acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ad4b0: 0x3c027900  lui         $v0, 0x7900
    ctx->pc = 0x1ad4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30976 << 16));
    // 0x1ad4b4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1ad4b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1ad4b8: 0x34427000  ori         $v0, $v0, 0x7000
    ctx->pc = 0x1ad4b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28672);
    // 0x1ad4bc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1ad4bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1ad4c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ad4c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad4c4: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1ad4c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1ad4c8: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AD4C8u;
    SET_GPR_U32(ctx, 31, 0x1AD4D0u);
    ctx->pc = 0x1AD4CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD4C8u;
    // 0x1ad4cc: 0x70023389  pcpyld      $a2, $zero, $v0 (Delay Slot)
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AD4C8u, 0x1AD4D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD4D0u;
label_1ad4d0:
    // 0x1ad4d0: 0x3c020709  lui         $v0, 0x709
    ctx->pc = 0x1ad4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1801 << 16));
    // 0x1ad4d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ad4d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad4d8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1ad4d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ad4dc: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AD4DCu;
    SET_GPR_U32(ctx, 31, 0x1AD4E4u);
    ctx->pc = 0x1AD4E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD4DCu;
    // 0x1ad4e0: 0x34461009  ori         $a2, $v0, 0x1009 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4105);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AD4DCu, 0x1AD4E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD4E4u;
label_1ad4e4:
    // 0x1ad4e4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1ad4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1ad4e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ad4e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad4ec: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x1ad4ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x1ad4f0: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1ad4f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1ad4f4: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AD4F4u;
    SET_GPR_U32(ctx, 31, 0x1AD4FCu);
    ctx->pc = 0x1AD4F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD4F4u;
    // 0x1ad4f8: 0x70023389  pcpyld      $a2, $zero, $v0 (Delay Slot)
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AD4F4u, 0x1AD4FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD4FCu;
label_1ad4fc:
    // 0x1ad4fc: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1ad4fcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1ad500:
    // 0x1ad500: 0x2e420004  sltiu       $v0, $s2, 0x4
    ctx->pc = 0x1ad500u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x1ad504: 0x1440ffd6  bnez        $v0, . + 4 + (-0x2A << 2)
    ctx->pc = 0x1AD504u;
    {
        const bool branch_taken_0x1ad504 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AD508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD504u;
        // 0x1ad508: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad504) {
            ctx->pc = 0x1AD460u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ad460;
        }
    }
    ctx->pc = 0x1AD50Cu;
    // 0x1ad50c: 0xc07088c  jal         func_1C2230
    ctx->pc = 0x1AD50Cu;
    SET_GPR_U32(ctx, 31, 0x1AD514u);
    ctx->pc = 0x1AD510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD50Cu;
    // 0x1ad510: 0x2405003f  addiu       $a1, $zero, 0x3F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2230u, 0x1AD50Cu, 0x1AD514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD514u;
label_1ad514:
    // 0x1ad514: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ad514u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad518: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x1ad518u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1ad51c: 0xc070614  jal         func_1C1850
    ctx->pc = 0x1AD51Cu;
    SET_GPR_U32(ctx, 31, 0x1AD524u);
    ctx->pc = 0x1AD520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD51Cu;
    // 0x1ad520: 0x2606005c  addiu       $a2, $s0, 0x5C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 92));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1850u, 0x1AD51Cu, 0x1AD524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD524u;
label_1ad524:
    // 0x1ad524: 0x8e2578d0  lw          $a1, 0x78D0($s1)
    ctx->pc = 0x1ad524u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 30928)));
    // 0x1ad528: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ad528u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad52c: 0xc070468  jal         func_1C11A0
    ctx->pc = 0x1AD52Cu;
    SET_GPR_U32(ctx, 31, 0x1AD534u);
    ctx->pc = 0x1AD530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD52Cu;
    // 0x1ad530: 0x27a600c0  addiu       $a2, $sp, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C11A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C11A0u, 0x1AD52Cu, 0x1AD534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD534u;
label_1ad534:
    // 0x1ad534: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ad534u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad538: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1AD538u;
    SET_GPR_U32(ctx, 31, 0x1AD540u);
    ctx->pc = 0x1AD53Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD538u;
    // 0x1ad53c: 0x24050200  addiu       $a1, $zero, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1AD538u, 0x1AD540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD540u;
label_1ad540:
    // 0x1ad540: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1ad540u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ad544: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ad544u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad548: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1ad548u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1ad54c: 0xc0705dc  jal         func_1C1770
    ctx->pc = 0x1AD54Cu;
    SET_GPR_U32(ctx, 31, 0x1AD554u);
    ctx->pc = 0x1AD550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD54Cu;
    // 0x1ad550: 0x296b8  dsll        $s2, $v0, 26 (Delay Slot)
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) << 26);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1770u, 0x1AD54Cu, 0x1AD554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD554u;
label_1ad554:
    // 0x1ad554: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x1ad554u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x1ad558: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ad558u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad55c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1ad55cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1ad560: 0x3c0201b2  lui         $v0, 0x1B2
    ctx->pc = 0x1ad560u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)434 << 16));
    // 0x1ad564: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1ad564u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1ad568: 0x240500e0  addiu       $a1, $zero, 0xE0
    ctx->pc = 0x1ad568u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x1ad56c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1ad56cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1ad570: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1AD570u;
    SET_GPR_U32(ctx, 31, 0x1AD578u);
    ctx->pc = 0x1AD574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD570u;
    // 0x1ad574: 0x2429025  or          $s2, $s2, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1AD570u, 0x1AD578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD578u;
label_1ad578:
    // 0x1ad578: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1ad578u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ad57c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1ad57cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1ad580: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1ad580u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1ad584: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1ad584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1ad588: 0x31fb8  dsll        $v1, $v1, 30
    ctx->pc = 0x1ad588u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 30);
    // 0x1ad58c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1ad58cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ad590: 0x722025  or          $a0, $v1, $s2
    ctx->pc = 0x1ad590u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 18));
    // 0x1ad594: 0x9e2378d0  lwu         $v1, 0x78D0($s1)
    ctx->pc = 0x1ad594u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 30928)));
    // 0x1ad598: 0x823025  or          $a2, $a0, $v0
    ctx->pc = 0x1ad598u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1ad59c: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1ad59cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1ad5a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ad5a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad5a4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1ad5a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ad5a8: 0x3197c  dsll32      $v1, $v1, 5
    ctx->pc = 0x1ad5a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 5));
    // 0x1ad5ac: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1ad5acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1ad5b0: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AD5B0u;
    SET_GPR_U32(ctx, 31, 0x1AD5B8u);
    ctx->pc = 0x1AD5B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD5B0u;
    // 0x1ad5b4: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AD5B0u, 0x1AD5B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD5B8u;
label_1ad5b8:
    // 0x1ad5b8: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x1ad5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x1ad5bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ad5bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad5c0: 0x2405004d  addiu       $a1, $zero, 0x4D
    ctx->pc = 0x1ad5c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x1ad5c4: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AD5C4u;
    SET_GPR_U32(ctx, 31, 0x1AD5CCu);
    ctx->pc = 0x1AD5C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD5C4u;
    // 0x1ad5c8: 0x34460080  ori         $a2, $v0, 0x80 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AD5C4u, 0x1AD5CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD5CCu;
label_1ad5cc:
    // 0x1ad5cc: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x1ad5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x1ad5d0: 0x9e2678c0  lwu         $a2, 0x78C0($s1)
    ctx->pc = 0x1ad5d0u;
    SET_GPR_ZE32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 17), 30912)));
    // 0x1ad5d4: 0x3443c00a  ori         $v1, $v0, 0xC00A
    ctx->pc = 0x1ad5d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49162);
    // 0x1ad5d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ad5d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad5dc: 0x8e2278c4  lw          $v0, 0x78C4($s1)
    ctx->pc = 0x1ad5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 30916)));
    // 0x1ad5e0: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1ad5e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1ad5e4: 0x63638  dsll        $a2, $a2, 24
    ctx->pc = 0x1ad5e4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 24);
    // 0x1ad5e8: 0xc31825  or          $v1, $a2, $v1
    ctx->pc = 0x1ad5e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x1ad5ec: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1ad5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1ad5f0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1ad5f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ad5f4: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1ad5f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1ad5f8: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x1ad5f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
    // 0x1ad5fc: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AD5FCu;
    SET_GPR_U32(ctx, 31, 0x1AD604u);
    ctx->pc = 0x1AD600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD5FCu;
    // 0x1ad600: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AD5FCu, 0x1AD604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD604u;
label_1ad604:
    // 0x1ad604: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1ad604u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1ad608: 0x24020089  addiu       $v0, $zero, 0x89
    ctx->pc = 0x1ad608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 137));
    // 0x1ad60c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1ad60cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1ad610: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ad610u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad614: 0x24050043  addiu       $a1, $zero, 0x43
    ctx->pc = 0x1ad614u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x1ad618: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AD618u;
    SET_GPR_U32(ctx, 31, 0x1AD620u);
    ctx->pc = 0x1AD61Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD618u;
    // 0x1ad61c: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AD618u, 0x1AD620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD620u;
label_1ad620:
    // 0x1ad620: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ad620u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad624: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ad624u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad628: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AD628u;
    SET_GPR_U32(ctx, 31, 0x1AD630u);
    ctx->pc = 0x1AD62Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD628u;
    // 0x1ad62c: 0x24060356  addiu       $a2, $zero, 0x356 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 854));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AD628u, 0x1AD630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD630u;
label_1ad630:
    // 0x1ad630: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ad630u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad634: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x1ad634u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1ad638: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AD638u;
    SET_GPR_U32(ctx, 31, 0x1AD640u);
    ctx->pc = 0x1AD63Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD638u;
    // 0x1ad63c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AD638u, 0x1AD640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD640u;
label_1ad640:
    // 0x1ad640: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x1AD640u;
    {
        const bool branch_taken_0x1ad640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD640u;
        // 0x1ad644: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad640) {
            ctx->pc = 0x1AD6E8u;
            goto label_1ad6e8;
        }
    }
    ctx->pc = 0x1AD648u;
label_1ad648:
    // 0x1ad648: 0x121980  sll         $v1, $s2, 6
    ctx->pc = 0x1ad648u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
    // 0x1ad64c: 0x2462003f  addiu       $v0, $v1, 0x3F
    ctx->pc = 0x1ad64cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 63));
    // 0x1ad650: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x1ad650u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1ad654: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x1ad654u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ad658: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1ad658u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1ad65c: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1ad65cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1ad660: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1ad660u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x1ad664: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1ad664u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1ad668: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x1ad668u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x1ad66c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1ad66cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1ad670: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1ad670u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ad674: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ad674u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad678: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AD678u;
    SET_GPR_U32(ctx, 31, 0x1AD680u);
    ctx->pc = 0x1AD67Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD678u;
    // 0x1ad67c: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AD678u, 0x1AD680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD680u;
label_1ad680:
    // 0x1ad680: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1ad680u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x1ad684: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ad684u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad688: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1ad688u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ad68c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AD68Cu;
    SET_GPR_U32(ctx, 31, 0x1AD694u);
    ctx->pc = 0x1AD690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD68Cu;
    // 0x1ad690: 0x34460008  ori         $a2, $v0, 0x8 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AD68Cu, 0x1AD694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD694u;
label_1ad694:
    // 0x1ad694: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1ad694u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ad698: 0x3c027900  lui         $v0, 0x7900
    ctx->pc = 0x1ad698u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30976 << 16));
    // 0x1ad69c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1ad69cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1ad6a0: 0x34427000  ori         $v0, $v0, 0x7000
    ctx->pc = 0x1ad6a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28672);
    // 0x1ad6a4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1ad6a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1ad6a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ad6a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad6ac: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1ad6acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1ad6b0: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AD6B0u;
    SET_GPR_U32(ctx, 31, 0x1AD6B8u);
    ctx->pc = 0x1AD6B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD6B0u;
    // 0x1ad6b4: 0x70023389  pcpyld      $a2, $zero, $v0 (Delay Slot)
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AD6B0u, 0x1AD6B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD6B8u;
label_1ad6b8:
    // 0x1ad6b8: 0x3c020e09  lui         $v0, 0xE09
    ctx->pc = 0x1ad6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3593 << 16));
    // 0x1ad6bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ad6bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad6c0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1ad6c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ad6c4: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AD6C4u;
    SET_GPR_U32(ctx, 31, 0x1AD6CCu);
    ctx->pc = 0x1AD6C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD6C4u;
    // 0x1ad6c8: 0x34462009  ori         $a2, $v0, 0x2009 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8201);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AD6C4u, 0x1AD6CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD6CCu;
label_1ad6cc:
    // 0x1ad6cc: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1ad6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1ad6d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ad6d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad6d4: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x1ad6d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x1ad6d8: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1ad6d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1ad6dc: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AD6DCu;
    SET_GPR_U32(ctx, 31, 0x1AD6E4u);
    ctx->pc = 0x1AD6E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD6DCu;
    // 0x1ad6e0: 0x70023389  pcpyld      $a2, $zero, $v0 (Delay Slot)
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AD6DCu, 0x1AD6E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD6E4u;
label_1ad6e4:
    // 0x1ad6e4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1ad6e4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1ad6e8:
    // 0x1ad6e8: 0x2e420004  sltiu       $v0, $s2, 0x4
    ctx->pc = 0x1ad6e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x1ad6ec: 0x1440ffd6  bnez        $v0, . + 4 + (-0x2A << 2)
    ctx->pc = 0x1AD6ECu;
    {
        const bool branch_taken_0x1ad6ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AD6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD6ECu;
        // 0x1ad6f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad6ec) {
            ctx->pc = 0x1AD648u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ad648;
        }
    }
    ctx->pc = 0x1AD6F4u;
    // 0x1ad6f4: 0xc07088c  jal         func_1C2230
    ctx->pc = 0x1AD6F4u;
    SET_GPR_U32(ctx, 31, 0x1AD6FCu);
    ctx->pc = 0x1AD6F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD6F4u;
    // 0x1ad6f8: 0x2405003f  addiu       $a1, $zero, 0x3F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2230u, 0x1AD6F4u, 0x1AD6FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD6FCu;
label_1ad6fc:
    // 0x1ad6fc: 0x24160100  addiu       $s6, $zero, 0x100
    ctx->pc = 0x1ad6fcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1ad700: 0x24150070  addiu       $s5, $zero, 0x70
    ctx->pc = 0x1ad700u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x1ad704: 0x1000009c  b           . + 4 + (0x9C << 2)
    ctx->pc = 0x1AD704u;
    {
        const bool branch_taken_0x1ad704 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD704u;
        // 0x1ad708: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad704) {
            ctx->pc = 0x1AD978u;
            goto label_1ad978;
        }
    }
    ctx->pc = 0x1AD70Cu;
    // 0x1ad70c: 0x0  nop
    ctx->pc = 0x1ad70cu;
    // NOP
label_1ad710:
    // 0x1ad710: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x1ad710u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
    // 0x1ad714: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AD714u;
    {
        const bool branch_taken_0x1ad714 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD714u;
        // 0x1ad718: 0x24131400  addiu       $s3, $zero, 0x1400 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 5120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad714) {
            ctx->pc = 0x1AD728u;
            goto label_1ad728;
        }
    }
    ctx->pc = 0x1AD71Cu;
    // 0x1ad71c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1AD71Cu;
    {
        const bool branch_taken_0x1ad71c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ad71c) {
            ctx->pc = 0x1AD730u;
            goto label_1ad730;
        }
    }
    ctx->pc = 0x1AD724u;
    // 0x1ad724: 0x0  nop
    ctx->pc = 0x1ad724u;
    // NOP
label_1ad728:
    // 0x1ad728: 0x24131000  addiu       $s3, $zero, 0x1000
    ctx->pc = 0x1ad728u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x1ad72c: 0x0  nop
    ctx->pc = 0x1ad72cu;
    // NOP
label_1ad730:
    // 0x1ad730: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ad730u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad734: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1AD734u;
    SET_GPR_U32(ctx, 31, 0x1AD73Cu);
    ctx->pc = 0x1AD738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD734u;
    // 0x1ad738: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1AD734u, 0x1AD73Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD73Cu;
label_1ad73c:
    // 0x1ad73c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1ad73cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ad740: 0x13183c  dsll32      $v1, $s3, 0
    ctx->pc = 0x1ad740u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) << (32 + 0));
    // 0x1ad744: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1ad744u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1ad748: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1ad748u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1ad74c: 0x236b8  dsll        $a2, $v0, 26
    ctx->pc = 0x1ad74cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << 26);
    // 0x1ad750: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ad750u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad754: 0x161182  srl         $v0, $s6, 6
    ctx->pc = 0x1ad754u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 22), 6));
    // 0x1ad758: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1ad758u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad75c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1ad75cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ad760: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1ad760u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1ad764: 0x213b8  dsll        $v0, $v0, 14
    ctx->pc = 0x1ad764u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 14);
    // 0x1ad768: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1ad768u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1ad76c: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1AD76Cu;
    SET_GPR_U32(ctx, 31, 0x1AD774u);
    ctx->pc = 0x1AD770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD76Cu;
    // 0x1ad770: 0x469825  or          $s3, $v0, $a2 (Delay Slot)
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1AD76Cu, 0x1AD774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD774u;
label_1ad774:
    // 0x1ad774: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1ad774u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ad778: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1ad778u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1ad77c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1ad77cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1ad780: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1ad780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1ad784: 0x31fb8  dsll        $v1, $v1, 30
    ctx->pc = 0x1ad784u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 30);
    // 0x1ad788: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1ad788u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ad78c: 0x2632025  or          $a0, $s3, $v1
    ctx->pc = 0x1ad78cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) | GPR_U64(ctx, 3));
    // 0x1ad790: 0x9e2378d0  lwu         $v1, 0x78D0($s1)
    ctx->pc = 0x1ad790u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 30928)));
    // 0x1ad794: 0x823025  or          $a2, $a0, $v0
    ctx->pc = 0x1ad794u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1ad798: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1ad798u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1ad79c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ad79cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad7a0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1ad7a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ad7a4: 0x3197c  dsll32      $v1, $v1, 5
    ctx->pc = 0x1ad7a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 5));
    // 0x1ad7a8: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1ad7a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1ad7ac: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AD7ACu;
    SET_GPR_U32(ctx, 31, 0x1AD7B4u);
    ctx->pc = 0x1AD7B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD7ACu;
    // 0x1ad7b0: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AD7ACu, 0x1AD7B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD7B4u;
label_1ad7b4:
    // 0x1ad7b4: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x1ad7b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
    // 0x1ad7b8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AD7B8u;
    {
        const bool branch_taken_0x1ad7b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD7B8u;
        // 0x1ad7bc: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad7b8) {
            ctx->pc = 0x1AD7C8u;
            goto label_1ad7c8;
        }
    }
    ctx->pc = 0x1AD7C0u;
    // 0x1ad7c0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1AD7C0u;
    {
        const bool branch_taken_0x1ad7c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ad7c0) {
            ctx->pc = 0x1AD7D0u;
            goto label_1ad7d0;
        }
    }
    ctx->pc = 0x1AD7C8u;
label_1ad7c8:
    // 0x1ad7c8: 0x240200a0  addiu       $v0, $zero, 0xA0
    ctx->pc = 0x1ad7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x1ad7cc: 0x0  nop
    ctx->pc = 0x1ad7ccu;
    // NOP
label_1ad7d0:
    // 0x1ad7d0: 0x161842  srl         $v1, $s6, 1
    ctx->pc = 0x1ad7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 22), 1));
    // 0x1ad7d4: 0x31982  srl         $v1, $v1, 6
    ctx->pc = 0x1ad7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 6));
    // 0x1ad7d8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1ad7d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ad7dc: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1ad7dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1ad7e0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1ad7e0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1ad7e4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1ad7e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1ad7e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ad7e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad7ec: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1ad7ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1ad7f0: 0x2405004d  addiu       $a1, $zero, 0x4D
    ctx->pc = 0x1ad7f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x1ad7f4: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AD7F4u;
    SET_GPR_U32(ctx, 31, 0x1AD7FCu);
    ctx->pc = 0x1AD7F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD7F4u;
    // 0x1ad7f8: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AD7F4u, 0x1AD7FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD7FCu;
label_1ad7fc:
    // 0x1ad7fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ad7fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad800: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x1ad800u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1ad804: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AD804u;
    SET_GPR_U32(ctx, 31, 0x1AD80Cu);
    ctx->pc = 0x1AD808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD804u;
    // 0x1ad808: 0x24060060  addiu       $a2, $zero, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AD804u, 0x1AD80Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD80Cu;
label_1ad80c:
    // 0x1ad80c: 0x26c3ffff  addiu       $v1, $s6, -0x1
    ctx->pc = 0x1ad80cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
    // 0x1ad810: 0x26a2ffff  addiu       $v0, $s5, -0x1
    ctx->pc = 0x1ad810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    // 0x1ad814: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1ad814u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1ad818: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1ad818u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ad81c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1ad81cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1ad820: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1ad820u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1ad824: 0x31bb8  dsll        $v1, $v1, 14
    ctx->pc = 0x1ad824u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 14);
    // 0x1ad828: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x1ad828u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
    // 0x1ad82c: 0x3463000a  ori         $v1, $v1, 0xA
    ctx->pc = 0x1ad82cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)10);
    // 0x1ad830: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ad830u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad834: 0x623025  or          $a2, $v1, $v0
    ctx->pc = 0x1ad834u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1ad838: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AD838u;
    SET_GPR_U32(ctx, 31, 0x1AD840u);
    ctx->pc = 0x1AD83Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD838u;
    // 0x1ad83c: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AD838u, 0x1AD840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD840u;
label_1ad840:
    // 0x1ad840: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ad840u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad844: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ad844u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad848: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AD848u;
    SET_GPR_U32(ctx, 31, 0x1AD850u);
    ctx->pc = 0x1AD84Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD848u;
    // 0x1ad84c: 0x24060316  addiu       $a2, $zero, 0x316 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 790));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AD848u, 0x1AD850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD850u;
label_1ad850:
    // 0x1ad850: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x1AD850u;
    {
        const bool branch_taken_0x1ad850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD850u;
        // 0x1ad854: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad850) {
            ctx->pc = 0x1AD958u;
            goto label_1ad958;
        }
    }
    ctx->pc = 0x1AD858u;
label_1ad858:
    // 0x1ad858: 0x131940  sll         $v1, $s3, 5
    ctx->pc = 0x1ad858u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 5));
    // 0x1ad85c: 0x2462001f  addiu       $v0, $v1, 0x1F
    ctx->pc = 0x1ad85cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 31));
    // 0x1ad860: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x1ad860u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1ad864: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x1ad864u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ad868: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1ad868u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1ad86c: 0x26a2ffff  addiu       $v0, $s5, -0x1
    ctx->pc = 0x1ad86cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    // 0x1ad870: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1ad870u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1ad874: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1ad874u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ad878: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1ad878u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1ad87c: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x1ad87cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x1ad880: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1ad880u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1ad884: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1ad884u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1ad888: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1ad888u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1ad88c: 0x433025  or          $a2, $v0, $v1
    ctx->pc = 0x1ad88cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1ad890: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AD890u;
    SET_GPR_U32(ctx, 31, 0x1AD898u);
    ctx->pc = 0x1AD894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD890u;
    // 0x1ad894: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AD890u, 0x1AD898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD898u;
label_1ad898:
    // 0x1ad898: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x1ad898u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x1ad89c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ad89cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad8a0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1ad8a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ad8a4: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AD8A4u;
    SET_GPR_U32(ctx, 31, 0x1AD8ACu);
    ctx->pc = 0x1AD8A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD8A4u;
    // 0x1ad8a8: 0x34460010  ori         $a2, $v0, 0x10 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AD8A4u, 0x1AD8ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD8ACu;
label_1ad8ac:
    // 0x1ad8ac: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1ad8acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ad8b0: 0x3c027900  lui         $v0, 0x7900
    ctx->pc = 0x1ad8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30976 << 16));
    // 0x1ad8b4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1ad8b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1ad8b8: 0x34427000  ori         $v0, $v0, 0x7000
    ctx->pc = 0x1ad8b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28672);
    // 0x1ad8bc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1ad8bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1ad8c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ad8c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad8c4: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1ad8c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1ad8c8: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AD8C8u;
    SET_GPR_U32(ctx, 31, 0x1AD8D0u);
    ctx->pc = 0x1AD8CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD8C8u;
    // 0x1ad8cc: 0x70023389  pcpyld      $a2, $zero, $v0 (Delay Slot)
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AD8C8u, 0x1AD8D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD8D0u;
label_1ad8d0:
    // 0x1ad8d0: 0x151100  sll         $v0, $s5, 4
    ctx->pc = 0x1ad8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
    // 0x1ad8d4: 0x161900  sll         $v1, $s6, 4
    ctx->pc = 0x1ad8d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 22), 4));
    // 0x1ad8d8: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1ad8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1ad8dc: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1ad8dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1ad8e0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1ad8e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ad8e4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1ad8e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1ad8e8: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1ad8e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1ad8ec: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1ad8ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1ad8f0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1ad8f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1ad8f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ad8f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad8f8: 0x623025  or          $a2, $v1, $v0
    ctx->pc = 0x1ad8f8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1ad8fc: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AD8FCu;
    SET_GPR_U32(ctx, 31, 0x1AD904u);
    ctx->pc = 0x1AD900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD8FCu;
    // 0x1ad900: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AD8FCu, 0x1AD904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD904u;
label_1ad904:
    // 0x1ad904: 0x151042  srl         $v0, $s5, 1
    ctx->pc = 0x1ad904u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 21), 1));
    // 0x1ad908: 0x161842  srl         $v1, $s6, 1
    ctx->pc = 0x1ad908u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 22), 1));
    // 0x1ad90c: 0x24420790  addiu       $v0, $v0, 0x790
    ctx->pc = 0x1ad90cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1936));
    // 0x1ad910: 0x24630700  addiu       $v1, $v1, 0x700
    ctx->pc = 0x1ad910u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1792));
    // 0x1ad914: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1ad914u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1ad918: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1ad918u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1ad91c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1ad91cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ad920: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1ad920u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1ad924: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1ad924u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1ad928: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1ad928u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1ad92c: 0x21c38  dsll        $v1, $v0, 16
    ctx->pc = 0x1ad92cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 16);
    // 0x1ad930: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1ad930u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1ad934: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1ad934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ad938: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1ad938u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1ad93c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1ad93cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ad940: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ad940u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad944: 0x70021389  pcpyld      $v0, $zero, $v0
    ctx->pc = 0x1ad944u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x1ad948: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AD948u;
    SET_GPR_U32(ctx, 31, 0x1AD950u);
    ctx->pc = 0x1AD94Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD948u;
    // 0x1ad94c: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AD948u, 0x1AD950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD950u;
label_1ad950:
    // 0x1ad950: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1ad950u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1ad954: 0x0  nop
    ctx->pc = 0x1ad954u;
    // NOP
label_1ad958:
    // 0x1ad958: 0x161042  srl         $v0, $s6, 1
    ctx->pc = 0x1ad958u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 22), 1));
    // 0x1ad95c: 0x21142  srl         $v0, $v0, 5
    ctx->pc = 0x1ad95cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 5));
    // 0x1ad960: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x1ad960u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1ad964: 0x1440ffbc  bnez        $v0, . + 4 + (-0x44 << 2)
    ctx->pc = 0x1AD964u;
    {
        const bool branch_taken_0x1ad964 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ad964) {
            ctx->pc = 0x1AD858u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ad858;
        }
    }
    ctx->pc = 0x1AD96Cu;
    // 0x1ad96c: 0x16b042  srl         $s6, $s6, 1
    ctx->pc = 0x1ad96cu;
    SET_GPR_S32(ctx, 22, (int32_t)SRL32(GPR_U32(ctx, 22), 1));
    // 0x1ad970: 0x15a842  srl         $s5, $s5, 1
    ctx->pc = 0x1ad970u;
    SET_GPR_S32(ctx, 21, (int32_t)SRL32(GPR_U32(ctx, 21), 1));
    // 0x1ad974: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1ad974u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1ad978:
    // 0x1ad978: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x1ad978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1ad97c: 0x243102b  sltu        $v0, $s2, $v1
    ctx->pc = 0x1ad97cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1ad980: 0x1440ff63  bnez        $v0, . + 4 + (-0x9D << 2)
    ctx->pc = 0x1AD980u;
    {
        const bool branch_taken_0x1ad980 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AD984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD980u;
        // 0x1ad984: 0x30620001  andi        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad980) {
            ctx->pc = 0x1AD710u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ad710;
        }
    }
    ctx->pc = 0x1AD988u;
    // 0x1ad988: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1AD988u;
    {
        const bool branch_taken_0x1ad988 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD988u;
        // 0x1ad98c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad988) {
            ctx->pc = 0x1AD9B0u;
            goto label_1ad9b0;
        }
    }
    ctx->pc = 0x1AD990u;
    // 0x1ad990: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1ad990u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1ad994: 0x240600a0  addiu       $a2, $zero, 0xA0
    ctx->pc = 0x1ad994u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x1ad998: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x1ad998u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad99c: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x1ad99cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad9a0: 0xc06c2b8  jal         func_1B0AE0
    ctx->pc = 0x1AD9A0u;
    SET_GPR_U32(ctx, 31, 0x1AD9A8u);
    ctx->pc = 0x1AD9A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD9A0u;
    // 0x1ad9a4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0AE0u, 0x1AD9A0u, 0x1AD9A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD9A8u;
label_1ad9a8:
    // 0x1ad9a8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1AD9A8u;
    {
        const bool branch_taken_0x1ad9a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ad9a8) {
            ctx->pc = 0x1AD9D0u;
            goto label_1ad9d0;
        }
    }
    ctx->pc = 0x1AD9B0u;
label_1ad9b0:
    // 0x1ad9b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ad9b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad9b4: 0x240500a0  addiu       $a1, $zero, 0xA0
    ctx->pc = 0x1ad9b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x1ad9b8: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x1ad9b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1ad9bc: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x1ad9bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad9c0: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x1ad9c0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad9c4: 0xc06c2b8  jal         func_1B0AE0
    ctx->pc = 0x1AD9C4u;
    SET_GPR_U32(ctx, 31, 0x1AD9CCu);
    ctx->pc = 0x1AD9C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD9C4u;
    // 0x1ad9c8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0AE0u, 0x1AD9C4u, 0x1AD9CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD9CCu;
label_1ad9cc:
    // 0x1ad9cc: 0x0  nop
    ctx->pc = 0x1ad9ccu;
    // NOP
label_1ad9d0:
    // 0x1ad9d0: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1ad9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1ad9d4: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x1ad9d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1ad9d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ad9d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad9dc: 0x2405003b  addiu       $a1, $zero, 0x3B
    ctx->pc = 0x1ad9dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x1ad9e0: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AD9E0u;
    SET_GPR_U32(ctx, 31, 0x1AD9E8u);
    ctx->pc = 0x1AD9E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD9E0u;
    // 0x1ad9e4: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AD9E0u, 0x1AD9E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD9E8u;
label_1ad9e8:
    // 0x1ad9e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ad9e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad9ec: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x1ad9ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1ad9f0: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AD9F0u;
    SET_GPR_U32(ctx, 31, 0x1AD9F8u);
    ctx->pc = 0x1AD9F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD9F0u;
    // 0x1ad9f4: 0x24060060  addiu       $a2, $zero, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AD9F0u, 0x1AD9F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD9F8u;
label_1ad9f8:
    // 0x1ad9f8: 0x26c3ffff  addiu       $v1, $s6, -0x1
    ctx->pc = 0x1ad9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
    // 0x1ad9fc: 0x26a2ffff  addiu       $v0, $s5, -0x1
    ctx->pc = 0x1ad9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    // 0x1ada00: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1ada00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1ada04: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1ada04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ada08: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1ada08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1ada0c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1ada0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1ada10: 0x31bb8  dsll        $v1, $v1, 14
    ctx->pc = 0x1ada10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 14);
    // 0x1ada14: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x1ada14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
    // 0x1ada18: 0x3463000a  ori         $v1, $v1, 0xA
    ctx->pc = 0x1ada18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)10);
    // 0x1ada1c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ada1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ada20: 0x623025  or          $a2, $v1, $v0
    ctx->pc = 0x1ada20u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1ada24: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1ADA24u;
    SET_GPR_U32(ctx, 31, 0x1ADA2Cu);
    ctx->pc = 0x1ADA28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADA24u;
    // 0x1ada28: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1ADA24u, 0x1ADA2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADA2Cu;
label_1ada2c:
    // 0x1ada2c: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1ada2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1ada30: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x1ada30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x1ada34: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1ada34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1ada38: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ada38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ada3c: 0x24050043  addiu       $a1, $zero, 0x43
    ctx->pc = 0x1ada3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x1ada40: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1ADA40u;
    SET_GPR_U32(ctx, 31, 0x1ADA48u);
    ctx->pc = 0x1ADA44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADA40u;
    // 0x1ada44: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1ADA40u, 0x1ADA48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADA48u;
label_1ada48:
    // 0x1ada48: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ada48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ada4c: 0x240500e0  addiu       $a1, $zero, 0xE0
    ctx->pc = 0x1ada4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x1ada50: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1ADA50u;
    SET_GPR_U32(ctx, 31, 0x1ADA58u);
    ctx->pc = 0x1ADA54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADA50u;
    // 0x1ada54: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1ADA50u, 0x1ADA58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADA58u;
label_1ada58:
    // 0x1ada58: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1ada58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ada5c: 0x3c034360  lui         $v1, 0x4360
    ctx->pc = 0x1ada5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17248 << 16));
    // 0x1ada60: 0x441004  sllv        $v0, $a0, $v0
    ctx->pc = 0x1ada60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 2) & 0x1F));
    // 0x1ada64: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1ada64u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ada68: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ada68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ada6c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ada6cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ada70: 0x0  nop
    ctx->pc = 0x1ada70u;
    // NOP
    // 0x1ada74: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1ada74u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1ada78: 0x46010543  div.s       $f21, $f0, $f1
    ctx->pc = 0x1ada78u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[21] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1ada7c: 0x0  nop
    ctx->pc = 0x1ada7cu;
    // NOP
    // 0x1ada80: 0x0  nop
    ctx->pc = 0x1ada80u;
    // NOP
    // 0x1ada84: 0x100000fe  b           . + 4 + (0xFE << 2)
    ctx->pc = 0x1ADA84u;
    {
        const bool branch_taken_0x1ada84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ada84) {
            ctx->pc = 0x1ADE80u;
            goto label_1ade80;
        }
    }
    ctx->pc = 0x1ADA8Cu;
    // 0x1ada8c: 0x0  nop
    ctx->pc = 0x1ada8cu;
    // NOP
label_1ada90:
    // 0x1ada90: 0x16800009  bnez        $s4, . + 4 + (0x9 << 2)
    ctx->pc = 0x1ADA90u;
    {
        const bool branch_taken_0x1ada90 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ADA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADA90u;
        // 0x1ada94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ada90) {
            ctx->pc = 0x1ADAB8u;
            goto label_1adab8;
        }
    }
    ctx->pc = 0x1ADA98u;
    // 0x1ada98: 0x24050090  addiu       $a1, $zero, 0x90
    ctx->pc = 0x1ada98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x1ada9c: 0x240600a0  addiu       $a2, $zero, 0xA0
    ctx->pc = 0x1ada9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x1adaa0: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x1adaa0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adaa4: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x1adaa4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adaa8: 0xc06c2b8  jal         func_1B0AE0
    ctx->pc = 0x1ADAA8u;
    SET_GPR_U32(ctx, 31, 0x1ADAB0u);
    ctx->pc = 0x1ADAACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADAA8u;
    // 0x1adaac: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0AE0u, 0x1ADAA8u, 0x1ADAB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADAB0u;
label_1adab0:
    // 0x1adab0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1ADAB0u;
    {
        const bool branch_taken_0x1adab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1adab0) {
            ctx->pc = 0x1ADAD8u;
            goto label_1adad8;
        }
    }
    ctx->pc = 0x1ADAB8u;
label_1adab8:
    // 0x1adab8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1adab8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adabc: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1adabcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1adac0: 0x240600a0  addiu       $a2, $zero, 0xA0
    ctx->pc = 0x1adac0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x1adac4: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x1adac4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adac8: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x1adac8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adacc: 0xc06c2b8  jal         func_1B0AE0
    ctx->pc = 0x1ADACCu;
    SET_GPR_U32(ctx, 31, 0x1ADAD4u);
    ctx->pc = 0x1ADAD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADACCu;
    // 0x1adad0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0AE0u, 0x1ADACCu, 0x1ADAD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADAD4u;
label_1adad4:
    // 0x1adad4: 0x0  nop
    ctx->pc = 0x1adad4u;
    // NOP
label_1adad8:
    // 0x1adad8: 0x12800003  beqz        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x1ADAD8u;
    {
        const bool branch_taken_0x1adad8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ADADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADAD8u;
        // 0x1adadc: 0x24121200  addiu       $s2, $zero, 0x1200 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4608));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1adad8) {
            ctx->pc = 0x1ADAE8u;
            goto label_1adae8;
        }
    }
    ctx->pc = 0x1ADAE0u;
    // 0x1adae0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1ADAE0u;
    {
        const bool branch_taken_0x1adae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1adae0) {
            ctx->pc = 0x1ADAF0u;
            goto label_1adaf0;
        }
    }
    ctx->pc = 0x1ADAE8u;
label_1adae8:
    // 0x1adae8: 0x24121000  addiu       $s2, $zero, 0x1000
    ctx->pc = 0x1adae8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x1adaec: 0x0  nop
    ctx->pc = 0x1adaecu;
    // NOP
label_1adaf0:
    // 0x1adaf0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1adaf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adaf4: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1ADAF4u;
    SET_GPR_U32(ctx, 31, 0x1ADAFCu);
    ctx->pc = 0x1ADAF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADAF4u;
    // 0x1adaf8: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1ADAF4u, 0x1ADAFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADAFCu;
label_1adafc:
    // 0x1adafc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1adafcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1adb00: 0x12183c  dsll32      $v1, $s2, 0
    ctx->pc = 0x1adb00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) << (32 + 0));
    // 0x1adb04: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1adb04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1adb08: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1adb08u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1adb0c: 0x236b8  dsll        $a2, $v0, 26
    ctx->pc = 0x1adb0cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << 26);
    // 0x1adb10: 0x161182  srl         $v0, $s6, 6
    ctx->pc = 0x1adb10u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 22), 6));
    // 0x1adb14: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x1adb14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1adb18: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1adb18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1adb1c: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x1adb1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x1adb20: 0x42bb8  dsll        $a1, $a0, 14
    ctx->pc = 0x1adb20u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << 14);
    // 0x1adb24: 0xa31825  or          $v1, $a1, $v1
    ctx->pc = 0x1adb24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x1adb28: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1adb28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adb2c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1adb2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1adb30: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1adb30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adb34: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1ADB34u;
    SET_GPR_U32(ctx, 31, 0x1ADB3Cu);
    ctx->pc = 0x1ADB38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADB34u;
    // 0x1adb38: 0x469025  or          $s2, $v0, $a2 (Delay Slot)
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1ADB34u, 0x1ADB3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADB3Cu;
label_1adb3c:
    // 0x1adb3c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1adb3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1adb40: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1adb40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1adb44: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1adb44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1adb48: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1adb48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1adb4c: 0x31fb8  dsll        $v1, $v1, 30
    ctx->pc = 0x1adb4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 30);
    // 0x1adb50: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1adb50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1adb54: 0x2432025  or          $a0, $s2, $v1
    ctx->pc = 0x1adb54u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) | GPR_U64(ctx, 3));
    // 0x1adb58: 0x9e2378d0  lwu         $v1, 0x78D0($s1)
    ctx->pc = 0x1adb58u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 30928)));
    // 0x1adb5c: 0x823025  or          $a2, $a0, $v0
    ctx->pc = 0x1adb5cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1adb60: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1adb60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1adb64: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1adb64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adb68: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1adb68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1adb6c: 0x3197c  dsll32      $v1, $v1, 5
    ctx->pc = 0x1adb6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 5));
    // 0x1adb70: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1adb70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1adb74: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1ADB74u;
    SET_GPR_U32(ctx, 31, 0x1ADB7Cu);
    ctx->pc = 0x1ADB78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADB74u;
    // 0x1adb78: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1ADB74u, 0x1ADB7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADB7Cu;
label_1adb7c:
    // 0x1adb7c: 0x12800004  beqz        $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x1ADB7Cu;
    {
        const bool branch_taken_0x1adb7c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ADB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADB7Cu;
        // 0x1adb80: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1adb7c) {
            ctx->pc = 0x1ADB90u;
            goto label_1adb90;
        }
    }
    ctx->pc = 0x1ADB84u;
    // 0x1adb84: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1ADB84u;
    {
        const bool branch_taken_0x1adb84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1adb84) {
            ctx->pc = 0x1ADB98u;
            goto label_1adb98;
        }
    }
    ctx->pc = 0x1ADB8Cu;
    // 0x1adb8c: 0x0  nop
    ctx->pc = 0x1adb8cu;
    // NOP
label_1adb90:
    // 0x1adb90: 0x24020090  addiu       $v0, $zero, 0x90
    ctx->pc = 0x1adb90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x1adb94: 0x0  nop
    ctx->pc = 0x1adb94u;
    // NOP
label_1adb98:
    // 0x1adb98: 0x161982  srl         $v1, $s6, 6
    ctx->pc = 0x1adb98u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 22), 6));
    // 0x1adb9c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1adb9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1adba0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1adba0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1adba4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1adba4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1adba8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1adba8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1adbac: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1adbacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1adbb0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1adbb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adbb4: 0x2405004d  addiu       $a1, $zero, 0x4D
    ctx->pc = 0x1adbb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x1adbb8: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1ADBB8u;
    SET_GPR_U32(ctx, 31, 0x1ADBC0u);
    ctx->pc = 0x1ADBBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADBB8u;
    // 0x1adbbc: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1ADBB8u, 0x1ADBC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADBC0u;
label_1adbc0:
    // 0x1adbc0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1adbc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adbc4: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x1adbc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1adbc8: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1ADBC8u;
    SET_GPR_U32(ctx, 31, 0x1ADBD0u);
    ctx->pc = 0x1ADBCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADBC8u;
    // 0x1adbcc: 0x24060060  addiu       $a2, $zero, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1ADBC8u, 0x1ADBD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADBD0u;
label_1adbd0:
    // 0x1adbd0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1adbd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adbd4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1adbd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adbd8: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1ADBD8u;
    SET_GPR_U32(ctx, 31, 0x1ADBE0u);
    ctx->pc = 0x1ADBDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADBD8u;
    // 0x1adbdc: 0x24060256  addiu       $a2, $zero, 0x256 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 598));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1ADBD8u, 0x1ADBE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADBE0u;
label_1adbe0:
    // 0x1adbe0: 0x6800004  bltz        $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x1ADBE0u;
    {
        const bool branch_taken_0x1adbe0 = (GPR_S64(ctx, 20) < 0);
        ctx->pc = 0x1ADBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADBE0u;
        // 0x1adbe4: 0x141842  srl         $v1, $s4, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1adbe0) {
            ctx->pc = 0x1ADBF4u;
            goto label_1adbf4;
        }
    }
    ctx->pc = 0x1ADBE8u;
    // 0x1adbe8: 0x44940000  mtc1        $s4, $f0
    ctx->pc = 0x1adbe8u;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1adbec: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1ADBECu;
    {
        const bool branch_taken_0x1adbec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ADBF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADBECu;
        // 0x1adbf0: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1adbec) {
            ctx->pc = 0x1ADC0Cu;
            goto label_1adc0c;
        }
    }
    ctx->pc = 0x1ADBF4u;
label_1adbf4:
    // 0x1adbf4: 0x32820001  andi        $v0, $s4, 0x1
    ctx->pc = 0x1adbf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)1);
    // 0x1adbf8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1adbf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1adbfc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1adbfcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1adc00: 0x0  nop
    ctx->pc = 0x1adc00u;
    // NOP
    // 0x1adc04: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1adc04u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1adc08: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1adc08u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1adc0c:
    // 0x1adc0c: 0x6c00004  bltz        $s6, . + 4 + (0x4 << 2)
    ctx->pc = 0x1ADC0Cu;
    {
        const bool branch_taken_0x1adc0c = (GPR_S64(ctx, 22) < 0);
        ctx->pc = 0x1ADC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADC0Cu;
        // 0x1adc10: 0x161842  srl         $v1, $s6, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1adc0c) {
            ctx->pc = 0x1ADC20u;
            goto label_1adc20;
        }
    }
    ctx->pc = 0x1ADC14u;
    // 0x1adc14: 0x44960000  mtc1        $s6, $f0
    ctx->pc = 0x1adc14u;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1adc18: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1ADC18u;
    {
        const bool branch_taken_0x1adc18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ADC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADC18u;
        // 0x1adc1c: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1adc18) {
            ctx->pc = 0x1ADC38u;
            goto label_1adc38;
        }
    }
    ctx->pc = 0x1ADC20u;
label_1adc20:
    // 0x1adc20: 0x32c20001  andi        $v0, $s6, 0x1
    ctx->pc = 0x1adc20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)1);
    // 0x1adc24: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1adc24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1adc28: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1adc28u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1adc2c: 0x0  nop
    ctx->pc = 0x1adc2cu;
    // NOP
    // 0x1adc30: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1adc30u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1adc34: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1adc34u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1adc38:
    // 0x1adc38: 0x0  nop
    ctx->pc = 0x1adc38u;
    // NOP
    // 0x1adc3c: 0x0  nop
    ctx->pc = 0x1adc3cu;
    // NOP
    // 0x1adc40: 0x46000d03  div.s       $f20, $f1, $f0
    ctx->pc = 0x1adc40u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1adc44: 0x0  nop
    ctx->pc = 0x1adc44u;
    // NOP
    // 0x1adc48: 0x0  nop
    ctx->pc = 0x1adc48u;
    // NOP
    // 0x1adc4c: 0x6800004  bltz        $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x1ADC4Cu;
    {
        const bool branch_taken_0x1adc4c = (GPR_S64(ctx, 20) < 0);
        if (branch_taken_0x1adc4c) {
            ctx->pc = 0x1ADC60u;
            goto label_1adc60;
        }
    }
    ctx->pc = 0x1ADC54u;
    // 0x1adc54: 0x44940000  mtc1        $s4, $f0
    ctx->pc = 0x1adc54u;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1adc58: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1ADC58u;
    {
        const bool branch_taken_0x1adc58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ADC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADC58u;
        // 0x1adc5c: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1adc58) {
            ctx->pc = 0x1ADC7Cu;
            goto label_1adc7c;
        }
    }
    ctx->pc = 0x1ADC60u;
label_1adc60:
    // 0x1adc60: 0x141842  srl         $v1, $s4, 1
    ctx->pc = 0x1adc60u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 20), 1));
    // 0x1adc64: 0x32820001  andi        $v0, $s4, 0x1
    ctx->pc = 0x1adc64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)1);
    // 0x1adc68: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1adc68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1adc6c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1adc6cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1adc70: 0x0  nop
    ctx->pc = 0x1adc70u;
    // NOP
    // 0x1adc74: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1adc74u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1adc78: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1adc78u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1adc7c:
    // 0x1adc7c: 0x6a00004  bltz        $s5, . + 4 + (0x4 << 2)
    ctx->pc = 0x1ADC7Cu;
    {
        const bool branch_taken_0x1adc7c = (GPR_S64(ctx, 21) < 0);
        ctx->pc = 0x1ADC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADC7Cu;
        // 0x1adc80: 0x151842  srl         $v1, $s5, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1adc7c) {
            ctx->pc = 0x1ADC90u;
            goto label_1adc90;
        }
    }
    ctx->pc = 0x1ADC84u;
    // 0x1adc84: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x1adc84u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1adc88: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1ADC88u;
    {
        const bool branch_taken_0x1adc88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ADC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADC88u;
        // 0x1adc8c: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1adc88) {
            ctx->pc = 0x1ADCA8u;
            goto label_1adca8;
        }
    }
    ctx->pc = 0x1ADC90u;
label_1adc90:
    // 0x1adc90: 0x32a20001  andi        $v0, $s5, 0x1
    ctx->pc = 0x1adc90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
    // 0x1adc94: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1adc94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1adc98: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1adc98u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1adc9c: 0x0  nop
    ctx->pc = 0x1adc9cu;
    // NOP
    // 0x1adca0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1adca0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1adca4: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1adca4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1adca8:
    // 0x1adca8: 0x0  nop
    ctx->pc = 0x1adca8u;
    // NOP
    // 0x1adcac: 0x0  nop
    ctx->pc = 0x1adcacu;
    // NOP
    // 0x1adcb0: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1adcb0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1adcb4: 0x0  nop
    ctx->pc = 0x1adcb4u;
    // NOP
    // 0x1adcb8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1adcb8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adcbc: 0x10000068  b           . + 4 + (0x68 << 2)
    ctx->pc = 0x1ADCBCu;
    {
        const bool branch_taken_0x1adcbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ADCC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADCBCu;
        // 0x1adcc0: 0x4600ae82  mul.s       $f26, $f21, $f0 (Delay Slot)
        ctx->f[26] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1adcbc) {
            ctx->pc = 0x1ADE60u;
            goto label_1ade60;
        }
    }
    ctx->pc = 0x1ADCC4u;
    // 0x1adcc4: 0x0  nop
    ctx->pc = 0x1adcc4u;
    // NOP
label_1adcc8:
    // 0x1adcc8: 0x121940  sll         $v1, $s2, 5
    ctx->pc = 0x1adcc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 5));
    // 0x1adccc: 0x2462001f  addiu       $v0, $v1, 0x1F
    ctx->pc = 0x1adcccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 31));
    // 0x1adcd0: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x1adcd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1adcd4: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x1adcd4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1adcd8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1adcd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1adcdc: 0x26a2ffff  addiu       $v0, $s5, -0x1
    ctx->pc = 0x1adcdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    // 0x1adce0: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1adce0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1adce4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1adce4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1adce8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1adce8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1adcec: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x1adcecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x1adcf0: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1adcf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1adcf4: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1adcf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1adcf8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1adcf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1adcfc: 0x433025  or          $a2, $v0, $v1
    ctx->pc = 0x1adcfcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1add00: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1ADD00u;
    SET_GPR_U32(ctx, 31, 0x1ADD08u);
    ctx->pc = 0x1ADD04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADD00u;
    // 0x1add04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1ADD00u, 0x1ADD08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADD08u;
label_1add08:
    // 0x1add08: 0x4614bb00  add.s       $f12, $f23, $f20
    ctx->pc = 0x1add08u;
    ctx->f[12] = FPU_ADD_S(ctx->f[23], ctx->f[20]);
    // 0x1add0c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1add0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1add10: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1add10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1add14: 0xc070870  jal         func_1C21C0
    ctx->pc = 0x1ADD14u;
    SET_GPR_U32(ctx, 31, 0x1ADD1Cu);
    ctx->pc = 0x1ADD18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADD14u;
    // 0x1add18: 0x461acb40  add.s       $f13, $f25, $f26 (Delay Slot)
    ctx->f[13] = FPU_ADD_S(ctx->f[25], ctx->f[26]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C21C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C21C0u, 0x1ADD14u, 0x1ADD1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADD1Cu;
label_1add1c:
    // 0x1add1c: 0x8e080020  lw          $t0, 0x20($s0)
    ctx->pc = 0x1add1cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1add20: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1add20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1add24: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1add24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1add28: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1add28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1add2c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1add2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1add30: 0x81a02  srl         $v1, $t0, 8
    ctx->pc = 0x1add30u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), 8));
    // 0x1add34: 0x310600ff  andi        $a2, $t0, 0xFF
    ctx->pc = 0x1add34u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x1add38: 0x306700ff  andi        $a3, $v1, 0xFF
    ctx->pc = 0x1add38u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1add3c: 0x81c02  srl         $v1, $t0, 16
    ctx->pc = 0x1add3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), 16));
    // 0x1add40: 0x73a38  dsll        $a3, $a3, 8
    ctx->pc = 0x1add40u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 8);
    // 0x1add44: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1add44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1add48: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x1add48u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x1add4c: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1add4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1add50: 0x663025  or          $a2, $v1, $a2
    ctx->pc = 0x1add50u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1add54: 0x81e02  srl         $v1, $t0, 24
    ctx->pc = 0x1add54u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), 24));
    // 0x1add58: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1add58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1add5c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1add5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1add60: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x1add60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
    // 0x1add64: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1add64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1add68: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1ADD68u;
    SET_GPR_U32(ctx, 31, 0x1ADD70u);
    ctx->pc = 0x1ADD6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADD68u;
    // 0x1add6c: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1ADD68u, 0x1ADD70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADD70u;
label_1add70:
    // 0x1add70: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1add70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1add74: 0x3c027900  lui         $v0, 0x7900
    ctx->pc = 0x1add74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30976 << 16));
    // 0x1add78: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1add78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1add7c: 0x34427000  ori         $v0, $v0, 0x7000
    ctx->pc = 0x1add7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28672);
    // 0x1add80: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1add80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1add84: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1add84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1add88: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1add88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1add8c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1ADD8Cu;
    SET_GPR_U32(ctx, 31, 0x1ADD94u);
    ctx->pc = 0x1ADD90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADD8Cu;
    // 0x1add90: 0x70023389  pcpyld      $a2, $zero, $v0 (Delay Slot)
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1ADD8Cu, 0x1ADD94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADD94u;
label_1add94:
    // 0x1add94: 0x4615c002  mul.s       $f0, $f24, $f21
    ctx->pc = 0x1add94u;
    ctx->f[0] = FPU_MUL_S(ctx->f[24], ctx->f[21]);
    // 0x1add98: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1add98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1add9c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1add9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adda0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1adda0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1adda4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1adda4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1adda8: 0x0  nop
    ctx->pc = 0x1adda8u;
    // NOP
    // 0x1addac: 0x4600a800  add.s       $f0, $f21, $f0
    ctx->pc = 0x1addacu;
    ctx->f[0] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
    // 0x1addb0: 0x46160840  add.s       $f1, $f1, $f22
    ctx->pc = 0x1addb0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[22]);
    // 0x1addb4: 0x46140b00  add.s       $f12, $f1, $f20
    ctx->pc = 0x1addb4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
    // 0x1addb8: 0xc070870  jal         func_1C21C0
    ctx->pc = 0x1ADDB8u;
    SET_GPR_U32(ctx, 31, 0x1ADDC0u);
    ctx->pc = 0x1ADDBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADDB8u;
    // 0x1addbc: 0x4600d340  add.s       $f13, $f26, $f0 (Delay Slot)
    ctx->f[13] = FPU_ADD_S(ctx->f[26], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C21C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C21C0u, 0x1ADDB8u, 0x1ADDC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADDC0u;
label_1addc0:
    // 0x1addc0: 0x8e080020  lw          $t0, 0x20($s0)
    ctx->pc = 0x1addc0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1addc4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1addc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1addc8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1addc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1addcc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1addccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1addd0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1addd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1addd4: 0x81a02  srl         $v1, $t0, 8
    ctx->pc = 0x1addd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), 8));
    // 0x1addd8: 0x310600ff  andi        $a2, $t0, 0xFF
    ctx->pc = 0x1addd8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x1adddc: 0x306700ff  andi        $a3, $v1, 0xFF
    ctx->pc = 0x1adddcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1adde0: 0x81c02  srl         $v1, $t0, 16
    ctx->pc = 0x1adde0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), 16));
    // 0x1adde4: 0x73a38  dsll        $a3, $a3, 8
    ctx->pc = 0x1adde4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 8);
    // 0x1adde8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1adde8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1addec: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x1addecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x1addf0: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1addf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1addf4: 0x663025  or          $a2, $v1, $a2
    ctx->pc = 0x1addf4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1addf8: 0x81e02  srl         $v1, $t0, 24
    ctx->pc = 0x1addf8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), 24));
    // 0x1addfc: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1addfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1ade00: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1ade00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1ade04: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x1ade04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
    // 0x1ade08: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1ade08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1ade0c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1ADE0Cu;
    SET_GPR_U32(ctx, 31, 0x1ADE14u);
    ctx->pc = 0x1ADE10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADE0Cu;
    // 0x1ade10: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1ADE0Cu, 0x1ADE14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADE14u;
label_1ade14:
    // 0x1ade14: 0x26a20790  addiu       $v0, $s5, 0x790
    ctx->pc = 0x1ade14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 1936));
    // 0x1ade18: 0x26c30700  addiu       $v1, $s6, 0x700
    ctx->pc = 0x1ade18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 1792));
    // 0x1ade1c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1ade1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1ade20: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1ade20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1ade24: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1ade24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ade28: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1ade28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1ade2c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1ade2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1ade30: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1ade30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1ade34: 0x21c38  dsll        $v1, $v0, 16
    ctx->pc = 0x1ade34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 16);
    // 0x1ade38: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1ade38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1ade3c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1ade3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ade40: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1ade40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1ade44: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1ade44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ade48: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ade48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ade4c: 0x70021389  pcpyld      $v0, $zero, $v0
    ctx->pc = 0x1ade4cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x1ade50: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1ADE50u;
    SET_GPR_U32(ctx, 31, 0x1ADE58u);
    ctx->pc = 0x1ADE54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADE50u;
    // 0x1ade54: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1ADE50u, 0x1ADE58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADE58u;
label_1ade58:
    // 0x1ade58: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1ade58u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1ade5c: 0x0  nop
    ctx->pc = 0x1ade5cu;
    // NOP
label_1ade60:
    // 0x1ade60: 0x161142  srl         $v0, $s6, 5
    ctx->pc = 0x1ade60u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 22), 5));
    // 0x1ade64: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x1ade64u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1ade68: 0x1440ff97  bnez        $v0, . + 4 + (-0x69 << 2)
    ctx->pc = 0x1ADE68u;
    {
        const bool branch_taken_0x1ade68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ADE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADE68u;
        // 0x1ade6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ade68) {
            ctx->pc = 0x1ADCC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1adcc8;
        }
    }
    ctx->pc = 0x1ADE70u;
    // 0x1ade70: 0xc07088c  jal         func_1C2230
    ctx->pc = 0x1ADE70u;
    SET_GPR_U32(ctx, 31, 0x1ADE78u);
    ctx->pc = 0x1ADE74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADE70u;
    // 0x1ade74: 0x2405003f  addiu       $a1, $zero, 0x3F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2230u, 0x1ADE70u, 0x1ADE78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADE78u;
label_1ade78:
    // 0x1ade78: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1ade78u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1ade7c: 0x3a940001  xori        $s4, $s4, 0x1
    ctx->pc = 0x1ade7cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) ^ (uint64_t)(uint16_t)1);
label_1ade80:
    // 0x1ade80: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1ade80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1ade84: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x1ade84u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1ade88: 0x1440ff01  bnez        $v0, . + 4 + (-0xFF << 2)
    ctx->pc = 0x1ADE88u;
    {
        const bool branch_taken_0x1ade88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ADE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADE88u;
        // 0x1ade8c: 0x17103c  dsll32      $v0, $s7, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ade88) {
            ctx->pc = 0x1ADA90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ada90;
        }
    }
    ctx->pc = 0x1ADE90u;
    // 0x1ade90: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ade90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ade94: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1ade94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1ade98: 0x24050043  addiu       $a1, $zero, 0x43
    ctx->pc = 0x1ade98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x1ade9c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1ade9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1adea0: 0xc070854  jal         func_1C2150
    ctx->pc = 0x1ADEA0u;
    SET_GPR_U32(ctx, 31, 0x1ADEA8u);
    ctx->pc = 0x1ADEA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADEA0u;
    // 0x1adea4: 0x34460068  ori         $a2, $v0, 0x68 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)104);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2150u, 0x1ADEA0u, 0x1ADEA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADEA8u;
label_1adea8:
    // 0x1adea8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1adea8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adeac: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x1adeacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1adeb0: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1ADEB0u;
    SET_GPR_U32(ctx, 31, 0x1ADEB8u);
    ctx->pc = 0x1ADEB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADEB0u;
    // 0x1adeb4: 0x24060060  addiu       $a2, $zero, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1ADEB0u, 0x1ADEB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADEB8u;
label_1adeb8:
    // 0x1adeb8: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1adeb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1adebc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1adebcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adec0: 0x2405003b  addiu       $a1, $zero, 0x3B
    ctx->pc = 0x1adec0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x1adec4: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1ADEC4u;
    SET_GPR_U32(ctx, 31, 0x1ADECCu);
    ctx->pc = 0x1ADEC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADEC4u;
    // 0x1adec8: 0x2303c  dsll32      $a2, $v0, 0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1ADEC4u, 0x1ADECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADECCu;
label_1adecc:
    // 0x1adecc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1adeccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aded0: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1ADED0u;
    SET_GPR_U32(ctx, 31, 0x1ADED8u);
    ctx->pc = 0x1ADED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADED0u;
    // 0x1aded4: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1ADED0u, 0x1ADED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADED8u;
label_1aded8:
    // 0x1aded8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1aded8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1adedc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1adedcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adee0: 0x161182  srl         $v0, $s6, 6
    ctx->pc = 0x1adee0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 22), 6));
    // 0x1adee4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1adee4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1adee8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1adee8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1adeec: 0x336b8  dsll        $a2, $v1, 26
    ctx->pc = 0x1adeecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << 26);
    // 0x1adef0: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1adef0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1adef4: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1adef4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adef8: 0x21bb8  dsll        $v1, $v0, 14
    ctx->pc = 0x1adef8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 14);
    // 0x1adefc: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x1adefcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x1adf00: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x1adf00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x1adf04: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1adf04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1adf08: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1ADF08u;
    SET_GPR_U32(ctx, 31, 0x1ADF10u);
    ctx->pc = 0x1ADF0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADF08u;
    // 0x1adf0c: 0x468025  or          $s0, $v0, $a2 (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1ADF08u, 0x1ADF10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADF10u;
label_1adf10:
    // 0x1adf10: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1adf10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1adf14: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1adf14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1adf18: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1adf18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1adf1c: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1adf1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1adf20: 0x31fb8  dsll        $v1, $v1, 30
    ctx->pc = 0x1adf20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 30);
    // 0x1adf24: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1adf24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1adf28: 0x2032025  or          $a0, $s0, $v1
    ctx->pc = 0x1adf28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1adf2c: 0x9e2378d0  lwu         $v1, 0x78D0($s1)
    ctx->pc = 0x1adf2cu;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 30928)));
    // 0x1adf30: 0x823025  or          $a2, $a0, $v0
    ctx->pc = 0x1adf30u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1adf34: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1adf34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1adf38: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1adf38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adf3c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1adf3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1adf40: 0x3197c  dsll32      $v1, $v1, 5
    ctx->pc = 0x1adf40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 5));
    // 0x1adf44: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1adf44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1adf48: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1ADF48u;
    SET_GPR_U32(ctx, 31, 0x1ADF50u);
    ctx->pc = 0x1ADF4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADF48u;
    // 0x1adf4c: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1ADF48u, 0x1ADF50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADF50u;
label_1adf50:
    // 0x1adf50: 0xc0705dc  jal         func_1C1770
    ctx->pc = 0x1ADF50u;
    SET_GPR_U32(ctx, 31, 0x1ADF58u);
    ctx->pc = 0x1ADF54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADF50u;
    // 0x1adf54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1770u, 0x1ADF50u, 0x1ADF58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADF58u;
label_1adf58:
    // 0x1adf58: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x1adf58u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1adf5c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1adf5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adf60: 0x3c02ff00  lui         $v0, 0xFF00
    ctx->pc = 0x1adf60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65280 << 16));
    // 0x1adf64: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x1adf64u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x1adf68: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1adf68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1adf6c: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1adf6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x1adf70: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1adf70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1adf74: 0x70021389  pcpyld      $v0, $zero, $v0
    ctx->pc = 0x1adf74u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x1adf78: 0xa23025  or          $a2, $a1, $v0
    ctx->pc = 0x1adf78u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x1adf7c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1ADF7Cu;
    SET_GPR_U32(ctx, 31, 0x1ADF84u);
    ctx->pc = 0x1ADF80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADF7Cu;
    // 0x1adf80: 0x2405004d  addiu       $a1, $zero, 0x4D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1ADF7Cu, 0x1ADF84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADF84u;
label_1adf84:
    // 0x1adf84: 0x26c3ffff  addiu       $v1, $s6, -0x1
    ctx->pc = 0x1adf84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
    // 0x1adf88: 0x26a2ffff  addiu       $v0, $s5, -0x1
    ctx->pc = 0x1adf88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    // 0x1adf8c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1adf8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1adf90: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1adf90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1adf94: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1adf94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1adf98: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1adf98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1adf9c: 0x31bb8  dsll        $v1, $v1, 14
    ctx->pc = 0x1adf9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 14);
    // 0x1adfa0: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x1adfa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
    // 0x1adfa4: 0x3463000a  ori         $v1, $v1, 0xA
    ctx->pc = 0x1adfa4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)10);
    // 0x1adfa8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1adfa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adfac: 0x623025  or          $a2, $v1, $v0
    ctx->pc = 0x1adfacu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1adfb0: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1ADFB0u;
    SET_GPR_U32(ctx, 31, 0x1ADFB8u);
    ctx->pc = 0x1ADFB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADFB0u;
    // 0x1adfb4: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1ADFB0u, 0x1ADFB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADFB8u;
label_1adfb8:
    // 0x1adfb8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1adfb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adfbc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1adfbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adfc0: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1ADFC0u;
    SET_GPR_U32(ctx, 31, 0x1ADFC8u);
    ctx->pc = 0x1ADFC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADFC0u;
    // 0x1adfc4: 0x24060356  addiu       $a2, $zero, 0x356 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 854));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1ADFC0u, 0x1ADFC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADFC8u;
label_1adfc8:
    // 0x1adfc8: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x1ADFC8u;
    {
        const bool branch_taken_0x1adfc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ADFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADFC8u;
        // 0x1adfcc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1adfc8) {
            ctx->pc = 0x1AE0A0u;
            goto label_1ae0a0;
        }
    }
    ctx->pc = 0x1ADFD0u;
label_1adfd0:
    // 0x1adfd0: 0x101940  sll         $v1, $s0, 5
    ctx->pc = 0x1adfd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x1adfd4: 0x2462001f  addiu       $v0, $v1, 0x1F
    ctx->pc = 0x1adfd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 31));
    // 0x1adfd8: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1adfd8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1adfdc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1adfdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1adfe0: 0x9e2378c0  lwu         $v1, 0x78C0($s1)
    ctx->pc = 0x1adfe0u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 30912)));
    // 0x1adfe4: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1adfe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1adfe8: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1adfe8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1adfec: 0x22c38  dsll        $a1, $v0, 16
    ctx->pc = 0x1adfecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << 16);
    // 0x1adff0: 0x8e2278c4  lw          $v0, 0x78C4($s1)
    ctx->pc = 0x1adff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 30916)));
    // 0x1adff4: 0x853025  or          $a2, $a0, $a1
    ctx->pc = 0x1adff4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x1adff8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1adff8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adffc: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x1adffcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1ae000: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1ae000u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1ae004: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1ae004u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1ae008: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1ae008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1ae00c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1ae00cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ae010: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1ae010u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1ae014: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1ae014u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1ae018: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AE018u;
    SET_GPR_U32(ctx, 31, 0x1AE020u);
    ctx->pc = 0x1AE01Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE018u;
    // 0x1ae01c: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AE018u, 0x1AE020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE020u;
label_1ae020:
    // 0x1ae020: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ae020u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae024: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1ae024u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ae028: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AE028u;
    SET_GPR_U32(ctx, 31, 0x1AE030u);
    ctx->pc = 0x1AE02Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE028u;
    // 0x1ae02c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AE028u, 0x1AE030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE030u;
label_1ae030:
    // 0x1ae030: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1ae030u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ae034: 0x3c027900  lui         $v0, 0x7900
    ctx->pc = 0x1ae034u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30976 << 16));
    // 0x1ae038: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1ae038u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1ae03c: 0x34427000  ori         $v0, $v0, 0x7000
    ctx->pc = 0x1ae03cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28672);
    // 0x1ae040: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1ae040u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1ae044: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ae044u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae048: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1ae048u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1ae04c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AE04Cu;
    SET_GPR_U32(ctx, 31, 0x1AE054u);
    ctx->pc = 0x1AE050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE04Cu;
    // 0x1ae050: 0x70023389  pcpyld      $a2, $zero, $v0 (Delay Slot)
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AE04Cu, 0x1AE054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE054u;
label_1ae054:
    // 0x1ae054: 0x151100  sll         $v0, $s5, 4
    ctx->pc = 0x1ae054u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
    // 0x1ae058: 0x161900  sll         $v1, $s6, 4
    ctx->pc = 0x1ae058u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 22), 4));
    // 0x1ae05c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1ae05cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ae060: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1ae060u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1ae064: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1ae064u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1ae068: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1ae068u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1ae06c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1ae06cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1ae070: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ae070u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae074: 0x623025  or          $a2, $v1, $v0
    ctx->pc = 0x1ae074u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1ae078: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AE078u;
    SET_GPR_U32(ctx, 31, 0x1AE080u);
    ctx->pc = 0x1AE07Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE078u;
    // 0x1ae07c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AE078u, 0x1AE080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE080u;
label_1ae080:
    // 0x1ae080: 0x3c028700  lui         $v0, 0x8700
    ctx->pc = 0x1ae080u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34560 << 16));
    // 0x1ae084: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ae084u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae088: 0x34429000  ori         $v0, $v0, 0x9000
    ctx->pc = 0x1ae088u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36864);
    // 0x1ae08c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1ae08cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1ae090: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AE090u;
    SET_GPR_U32(ctx, 31, 0x1AE098u);
    ctx->pc = 0x1AE094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE090u;
    // 0x1ae094: 0x70023389  pcpyld      $a2, $zero, $v0 (Delay Slot)
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AE090u, 0x1AE098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE098u;
label_1ae098:
    // 0x1ae098: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1ae098u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1ae09c: 0x0  nop
    ctx->pc = 0x1ae09cu;
    // NOP
label_1ae0a0:
    // 0x1ae0a0: 0x8e2378c8  lw          $v1, 0x78C8($s1)
    ctx->pc = 0x1ae0a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 30920)));
    // 0x1ae0a4: 0x31942  srl         $v1, $v1, 5
    ctx->pc = 0x1ae0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
    // 0x1ae0a8: 0x203182b  sltu        $v1, $s0, $v1
    ctx->pc = 0x1ae0a8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1ae0ac: 0x1460ffc8  bnez        $v1, . + 4 + (-0x38 << 2)
    ctx->pc = 0x1AE0ACu;
    {
        const bool branch_taken_0x1ae0ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ae0ac) {
            ctx->pc = 0x1ADFD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1adfd0;
        }
    }
    ctx->pc = 0x1AE0B4u;
    // 0x1ae0b4: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x1ae0b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1ae0b8: 0xc7ba0028  lwc1        $f26, 0x28($sp)
    ctx->pc = 0x1ae0b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x1ae0bc: 0x7bb700a0  lq          $s7, 0xA0($sp)
    ctx->pc = 0x1ae0bcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1ae0c0: 0xc7b90024  lwc1        $f25, 0x24($sp)
    ctx->pc = 0x1ae0c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x1ae0c4: 0x7bb60090  lq          $s6, 0x90($sp)
    ctx->pc = 0x1ae0c4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1ae0c8: 0xc7b80020  lwc1        $f24, 0x20($sp)
    ctx->pc = 0x1ae0c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x1ae0cc: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x1ae0ccu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1ae0d0: 0xc7b7001c  lwc1        $f23, 0x1C($sp)
    ctx->pc = 0x1ae0d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x1ae0d4: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x1ae0d4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1ae0d8: 0xc7b60018  lwc1        $f22, 0x18($sp)
    ctx->pc = 0x1ae0d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1ae0dc: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x1ae0dcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1ae0e0: 0xc7b50014  lwc1        $f21, 0x14($sp)
    ctx->pc = 0x1ae0e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1ae0e4: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x1ae0e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ae0e8: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x1ae0e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1ae0ec: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1ae0ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ae0f0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1ae0f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ae0f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1AE0F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AE0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE0F4u;
        // 0x1ae0f8: 0x27bd04f0  addiu       $sp, $sp, 0x4F0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1264));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AE0F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AE0FCu;
}
