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

// Function: sub_001B6C80
// Address: 0x1b6c80 - 0x1b7c80
void sub_001B6C80_0x1b6c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B6C80_0x1b6c80");
#endif

    switch (ctx->pc) {
        case 0x1b6cd4u: goto label_1b6cd4;
        case 0x1b6d0cu: goto label_1b6d0c;
        case 0x1b6d48u: goto label_1b6d48;
        case 0x1b6d60u: goto label_1b6d60;
        case 0x1b6d6cu: goto label_1b6d6c;
        case 0x1b6d8cu: goto label_1b6d8c;
        case 0x1b6da4u: goto label_1b6da4;
        case 0x1b6db4u: goto label_1b6db4;
        case 0x1b6dd0u: goto label_1b6dd0;
        case 0x1b6de0u: goto label_1b6de0;
        case 0x1b6df4u: goto label_1b6df4;
        case 0x1b6df8u: goto label_1b6df8;
        case 0x1b6e00u: goto label_1b6e00;
        case 0x1b6e30u: goto label_1b6e30;
        case 0x1b6e60u: goto label_1b6e60;
        case 0x1b6e90u: goto label_1b6e90;
        case 0x1b6ee8u: goto label_1b6ee8;
        case 0x1b6ef4u: goto label_1b6ef4;
        case 0x1b6f08u: goto label_1b6f08;
        case 0x1b6f24u: goto label_1b6f24;
        case 0x1b6f38u: goto label_1b6f38;
        case 0x1b6f48u: goto label_1b6f48;
        case 0x1b6f6cu: goto label_1b6f6c;
        case 0x1b6f9cu: goto label_1b6f9c;
        case 0x1b6facu: goto label_1b6fac;
        case 0x1b6fccu: goto label_1b6fcc;
        case 0x1b6fd8u: goto label_1b6fd8;
        case 0x1b7000u: goto label_1b7000;
        case 0x1b7014u: goto label_1b7014;
        case 0x1b7024u: goto label_1b7024;
        case 0x1b7034u: goto label_1b7034;
        case 0x1b703cu: goto label_1b703c;
        case 0x1b7228u: goto label_1b7228;
        case 0x1b724cu: goto label_1b724c;
        case 0x1b7264u: goto label_1b7264;
        case 0x1b7280u: goto label_1b7280;
        case 0x1b72e8u: goto label_1b72e8;
        case 0x1b7314u: goto label_1b7314;
        case 0x1b7328u: goto label_1b7328;
        case 0x1b734cu: goto label_1b734c;
        case 0x1b7370u: goto label_1b7370;
        case 0x1b7384u: goto label_1b7384;
        case 0x1b73a8u: goto label_1b73a8;
        case 0x1b73b8u: goto label_1b73b8;
        case 0x1b73f4u: goto label_1b73f4;
        case 0x1b7414u: goto label_1b7414;
        case 0x1b7424u: goto label_1b7424;
        case 0x1b7434u: goto label_1b7434;
        case 0x1b7448u: goto label_1b7448;
        case 0x1b747cu: goto label_1b747c;
        case 0x1b7494u: goto label_1b7494;
        case 0x1b74bcu: goto label_1b74bc;
        case 0x1b74fcu: goto label_1b74fc;
        case 0x1b7518u: goto label_1b7518;
        case 0x1b7528u: goto label_1b7528;
        case 0x1b75a8u: goto label_1b75a8;
        case 0x1b75d4u: goto label_1b75d4;
        case 0x1b75e8u: goto label_1b75e8;
        case 0x1b760cu: goto label_1b760c;
        case 0x1b761cu: goto label_1b761c;
        case 0x1b762cu: goto label_1b762c;
        case 0x1b764cu: goto label_1b764c;
        case 0x1b7670u: goto label_1b7670;
        case 0x1b7680u: goto label_1b7680;
        case 0x1b76dcu: goto label_1b76dc;
        case 0x1b76e8u: goto label_1b76e8;
        case 0x1b7710u: goto label_1b7710;
        case 0x1b7750u: goto label_1b7750;
        case 0x1b7758u: goto label_1b7758;
        case 0x1b7784u: goto label_1b7784;
        case 0x1b7794u: goto label_1b7794;
        case 0x1b77a4u: goto label_1b77a4;
        case 0x1b77c8u: goto label_1b77c8;
        case 0x1b77f0u: goto label_1b77f0;
        case 0x1b7800u: goto label_1b7800;
        case 0x1b7854u: goto label_1b7854;
        case 0x1b786cu: goto label_1b786c;
        case 0x1b78a8u: goto label_1b78a8;
        case 0x1b7940u: goto label_1b7940;
        case 0x1b7988u: goto label_1b7988;
        case 0x1b799cu: goto label_1b799c;
        case 0x1b79acu: goto label_1b79ac;
        case 0x1b79bcu: goto label_1b79bc;
        case 0x1b79ccu: goto label_1b79cc;
        case 0x1b7a44u: goto label_1b7a44;
        case 0x1b7a98u: goto label_1b7a98;
        case 0x1b7ab0u: goto label_1b7ab0;
        case 0x1b7aecu: goto label_1b7aec;
        case 0x1b7b88u: goto label_1b7b88;
        case 0x1b7bd0u: goto label_1b7bd0;
        case 0x1b7bf0u: goto label_1b7bf0;
        case 0x1b7c00u: goto label_1b7c00;
        case 0x1b7c10u: goto label_1b7c10;
        case 0x1b7c20u: goto label_1b7c20;
        default: break;
    }

    ctx->pc = 0x1b6c80u;

    // 0x1b6c80: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x1b6c80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
    // 0x1b6c84: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1b6c84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b6c88: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x1b6c88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x1b6c8c: 0x2407000e  addiu       $a3, $zero, 0xE
    ctx->pc = 0x1b6c8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1b6c90: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x1b6c90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x1b6c94: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x1b6c94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x1b6c98: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x1b6c98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x1b6c9c: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x1b6c9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x1b6ca0: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1b6ca0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x1b6ca4: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1b6ca4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6ca8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1b6ca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1b6cac: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1b6cacu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6cb0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1b6cb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1b6cb4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b6cb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6cb8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1b6cb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1b6cbc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1b6cbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1b6cc0: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x1b6cc0u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1b6cc4: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x1b6cc4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1b6cc8: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x1b6cc8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1b6ccc: 0xc06983c  jal         func_1A60F0
    ctx->pc = 0x1B6CCCu;
    SET_GPR_U32(ctx, 31, 0x1B6CD4u);
    ctx->pc = 0x1B6CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6CCCu;
    // 0x1b6cd0: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A60F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A60F0u, 0x1B6CCCu, 0x1B6CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6CD4u;
label_1b6cd4:
    // 0x1b6cd4: 0xc68300b4  lwc1        $f3, 0xB4($s4)
    ctx->pc = 0x1b6cd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1b6cd8: 0x3c0243b4  lui         $v0, 0x43B4
    ctx->pc = 0x1b6cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17332 << 16));
    // 0x1b6cdc: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1b6cdcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b6ce0: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1b6ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x1b6ce4: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x1b6ce4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1b6ce8: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1b6ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1b6cec: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x1b6cecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x1b6cf0: 0x46021883  div.s       $f2, $f3, $f2
    ctx->pc = 0x1b6cf0u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[3], ctx->f[2]); }
    // 0x1b6cf4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1b6cf4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b6cf8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b6cf8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b6cfc: 0x0  nop
    ctx->pc = 0x1b6cfcu;
    // NOP
    // 0x1b6d00: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1b6d00u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1b6d04: 0xc047b2c  jal         func_11ECB0
    ctx->pc = 0x1B6D04u;
    SET_GPR_U32(ctx, 31, 0x1B6D0Cu);
    ctx->pc = 0x1B6D08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6D04u;
    // 0x1b6d08: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11ECB0u, 0x1B6D04u, 0x1B6D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6D0Cu;
label_1b6d0c:
    // 0x1b6d0c: 0xe68000d0  swc1        $f0, 0xD0($s4)
    ctx->pc = 0x1b6d0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 208), bits); }
    // 0x1b6d10: 0x3c0243b4  lui         $v0, 0x43B4
    ctx->pc = 0x1b6d10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17332 << 16));
    // 0x1b6d14: 0xc68300b4  lwc1        $f3, 0xB4($s4)
    ctx->pc = 0x1b6d14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1b6d18: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x1b6d18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x1b6d1c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1b6d1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b6d20: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1b6d20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x1b6d24: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1b6d24u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b6d28: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1b6d28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1b6d2c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b6d2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b6d30: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x1b6d30u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x1b6d34: 0x46021883  div.s       $f2, $f3, $f2
    ctx->pc = 0x1b6d34u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[3], ctx->f[2]); }
    // 0x1b6d38: 0x0  nop
    ctx->pc = 0x1b6d38u;
    // NOP
    // 0x1b6d3c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1b6d3cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1b6d40: 0xc047a98  jal         func_11EA60
    ctx->pc = 0x1B6D40u;
    SET_GPR_U32(ctx, 31, 0x1B6D48u);
    ctx->pc = 0x1B6D44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6D40u;
    // 0x1b6d44: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EA60u, 0x1B6D40u, 0x1B6D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6D48u;
label_1b6d48:
    // 0x1b6d48: 0xe68000d8  swc1        $f0, 0xD8($s4)
    ctx->pc = 0x1b6d48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 216), bits); }
    // 0x1b6d4c: 0x268400d0  addiu       $a0, $s4, 0xD0
    ctx->pc = 0x1b6d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 208));
    // 0x1b6d50: 0xae8000d4  sw          $zero, 0xD4($s4)
    ctx->pc = 0x1b6d50u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 212), GPR_U32(ctx, 0));
    // 0x1b6d54: 0xc68c00b8  lwc1        $f12, 0xB8($s4)
    ctx->pc = 0x1b6d54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1b6d58: 0xc0414dc  jal         func_105370
    ctx->pc = 0x1B6D58u;
    SET_GPR_U32(ctx, 31, 0x1B6D60u);
    ctx->pc = 0x1B6D5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6D58u;
    // 0x1b6d5c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x1B6D58u, 0x1B6D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6D60u;
label_1b6d60:
    // 0x1b6d60: 0xae8000dc  sw          $zero, 0xDC($s4)
    ctx->pc = 0x1b6d60u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 220), GPR_U32(ctx, 0));
    // 0x1b6d64: 0xc04d298  jal         func_134A60
    ctx->pc = 0x1B6D64u;
    SET_GPR_U32(ctx, 31, 0x1B6D6Cu);
    ctx->pc = 0x1B6D68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6D64u;
    // 0x1b6d68: 0x9e8400b0  lwu         $a0, 0xB0($s4) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 20), 176)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x134A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x134A60u, 0x1B6D64u, 0x1B6D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6D6Cu;
label_1b6d6c:
    // 0x1b6d6c: 0x8e8200a8  lw          $v0, 0xA8($s4)
    ctx->pc = 0x1b6d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 168)));
    // 0x1b6d70: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1b6d70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1b6d74: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b6d74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6d78: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b6d78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6d7c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1b6d7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b6d80: 0x2407000e  addiu       $a3, $zero, 0xE
    ctx->pc = 0x1b6d80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1b6d84: 0xc06983c  jal         func_1A60F0
    ctx->pc = 0x1B6D84u;
    SET_GPR_U32(ctx, 31, 0x1B6D8Cu);
    ctx->pc = 0x1B6D88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6D84u;
    // 0x1b6d88: 0x43f004  sllv        $fp, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A60F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A60F0u, 0x1B6D84u, 0x1B6D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6D8Cu;
label_1b6d8c:
    // 0x1b6d8c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1b6d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x1b6d90: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b6d90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6d94: 0x34421600  ori         $v0, $v0, 0x1600
    ctx->pc = 0x1b6d94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5632);
    // 0x1b6d98: 0x24050050  addiu       $a1, $zero, 0x50
    ctx->pc = 0x1b6d98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x1b6d9c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B6D9Cu;
    SET_GPR_U32(ctx, 31, 0x1B6DA4u);
    ctx->pc = 0x1B6DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6D9Cu;
    // 0x1b6da0: 0x2303c  dsll32      $a2, $v0, 0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B6D9Cu, 0x1B6DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6DA4u;
label_1b6da4:
    // 0x1b6da4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b6da4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6da8: 0x24050051  addiu       $a1, $zero, 0x51
    ctx->pc = 0x1b6da8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
    // 0x1b6dac: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B6DACu;
    SET_GPR_U32(ctx, 31, 0x1B6DB4u);
    ctx->pc = 0x1B6DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6DACu;
    // 0x1b6db0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B6DACu, 0x1B6DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6DB4u;
label_1b6db4:
    // 0x1b6db4: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x1b6db4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1b6db8: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x1b6db8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1b6dbc: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1b6dbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b6dc0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b6dc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6dc4: 0x24050052  addiu       $a1, $zero, 0x52
    ctx->pc = 0x1b6dc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    // 0x1b6dc8: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B6DC8u;
    SET_GPR_U32(ctx, 31, 0x1B6DD0u);
    ctx->pc = 0x1B6DCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6DC8u;
    // 0x1b6dcc: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B6DC8u, 0x1B6DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6DD0u;
label_1b6dd0:
    // 0x1b6dd0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b6dd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6dd4: 0x24050053  addiu       $a1, $zero, 0x53
    ctx->pc = 0x1b6dd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
    // 0x1b6dd8: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B6DD8u;
    SET_GPR_U32(ctx, 31, 0x1B6DE0u);
    ctx->pc = 0x1B6DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6DD8u;
    // 0x1b6ddc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B6DD8u, 0x1B6DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6DE0u;
label_1b6de0:
    // 0x1b6de0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1b6de0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b6de4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b6de4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6de8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1b6de8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b6dec: 0xc06983c  jal         func_1A60F0
    ctx->pc = 0x1B6DECu;
    SET_GPR_U32(ctx, 31, 0x1B6DF4u);
    ctx->pc = 0x1B6DF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6DECu;
    // 0x1b6df0: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A60F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A60F0u, 0x1B6DECu, 0x1B6DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6DF4u;
label_1b6df4:
    // 0x1b6df4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1b6df4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b6df8:
    // 0x1b6df8: 0xc04d4a0  jal         func_135280
    ctx->pc = 0x1B6DF8u;
    SET_GPR_U32(ctx, 31, 0x1B6E00u);
    ctx->pc = 0x135280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135280u, 0x1B6DF8u, 0x1B6E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6E00u;
label_1b6e00:
    // 0x1b6e00: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1b6e00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b6e04: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1b6e04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1b6e08: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x1b6e08u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b6e0c: 0x8ea2783c  lw          $v0, 0x783C($s5)
    ctx->pc = 0x1b6e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 30780)));
    // 0x1b6e10: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x1b6e10u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x1b6e14: 0x62200  sll         $a0, $a2, 8
    ctx->pc = 0x1b6e14u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
    // 0x1b6e18: 0x62c00  sll         $a1, $a2, 16
    ctx->pc = 0x1b6e18u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x1b6e1c: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x1b6e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x1b6e20: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x1b6e20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1b6e24: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1b6e24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1b6e28: 0xc04d4a0  jal         func_135280
    ctx->pc = 0x1B6E28u;
    SET_GPR_U32(ctx, 31, 0x1B6E30u);
    ctx->pc = 0x1B6E2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6E28u;
    // 0x1b6e2c: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135280u, 0x1B6E28u, 0x1B6E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6E30u;
label_1b6e30:
    // 0x1b6e30: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1b6e30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b6e34: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1b6e34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1b6e38: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x1b6e38u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b6e3c: 0x8ea2783c  lw          $v0, 0x783C($s5)
    ctx->pc = 0x1b6e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 30780)));
    // 0x1b6e40: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x1b6e40u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x1b6e44: 0x62200  sll         $a0, $a2, 8
    ctx->pc = 0x1b6e44u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
    // 0x1b6e48: 0x62c00  sll         $a1, $a2, 16
    ctx->pc = 0x1b6e48u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x1b6e4c: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x1b6e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x1b6e50: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x1b6e50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1b6e54: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1b6e54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1b6e58: 0xc04d4a0  jal         func_135280
    ctx->pc = 0x1B6E58u;
    SET_GPR_U32(ctx, 31, 0x1B6E60u);
    ctx->pc = 0x1B6E5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6E58u;
    // 0x1b6e5c: 0xac430004  sw          $v1, 0x4($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135280u, 0x1B6E58u, 0x1B6E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6E60u;
label_1b6e60:
    // 0x1b6e60: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1b6e60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b6e64: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1b6e64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1b6e68: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x1b6e68u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b6e6c: 0x8ea2783c  lw          $v0, 0x783C($s5)
    ctx->pc = 0x1b6e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 30780)));
    // 0x1b6e70: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x1b6e70u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x1b6e74: 0x62200  sll         $a0, $a2, 8
    ctx->pc = 0x1b6e74u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
    // 0x1b6e78: 0x62c00  sll         $a1, $a2, 16
    ctx->pc = 0x1b6e78u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x1b6e7c: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x1b6e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x1b6e80: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x1b6e80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1b6e84: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1b6e84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1b6e88: 0xc04d4a0  jal         func_135280
    ctx->pc = 0x1B6E88u;
    SET_GPR_U32(ctx, 31, 0x1B6E90u);
    ctx->pc = 0x1B6E8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6E88u;
    // 0x1b6e8c: 0xac430008  sw          $v1, 0x8($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135280u, 0x1B6E88u, 0x1B6E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6E90u;
label_1b6e90:
    // 0x1b6e90: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1b6e90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b6e94: 0x8ea3783c  lw          $v1, 0x783C($s5)
    ctx->pc = 0x1b6e94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 30780)));
    // 0x1b6e98: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x1b6e98u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b6e9c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1b6e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1b6ea0: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x1b6ea0u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x1b6ea4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1b6ea4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1b6ea8: 0x61200  sll         $v0, $a2, 8
    ctx->pc = 0x1b6ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
    // 0x1b6eac: 0x62c00  sll         $a1, $a2, 16
    ctx->pc = 0x1b6eacu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x1b6eb0: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x1b6eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1b6eb4: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x1b6eb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1b6eb8: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x1b6eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1b6ebc: 0x2e020200  sltiu       $v0, $s0, 0x200
    ctx->pc = 0x1b6ebcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)512) ? 1 : 0);
    // 0x1b6ec0: 0xac64000c  sw          $a0, 0xC($v1)
    ctx->pc = 0x1b6ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
    // 0x1b6ec4: 0x8ea3783c  lw          $v1, 0x783C($s5)
    ctx->pc = 0x1b6ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 30780)));
    // 0x1b6ec8: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1b6ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1b6ecc: 0x1440ffca  bnez        $v0, . + 4 + (-0x36 << 2)
    ctx->pc = 0x1B6ECCu;
    {
        const bool branch_taken_0x1b6ecc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B6ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6ECCu;
        // 0x1b6ed0: 0xaea3783c  sw          $v1, 0x783C($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 30780), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6ecc) {
            ctx->pc = 0x1B6DF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b6df8;
        }
    }
    ctx->pc = 0x1B6ED4u;
    // 0x1b6ed4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b6ed4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6ed8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b6ed8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6edc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1b6edcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b6ee0: 0xc06983c  jal         func_1A60F0
    ctx->pc = 0x1B6EE0u;
    SET_GPR_U32(ctx, 31, 0x1B6EE8u);
    ctx->pc = 0x1B6EE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6EE0u;
    // 0x1b6ee4: 0x2407000e  addiu       $a3, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A60F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A60F0u, 0x1B6EE0u, 0x1B6EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6EE8u;
label_1b6ee8:
    // 0x1b6ee8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b6ee8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6eec: 0xc07088c  jal         func_1C2230
    ctx->pc = 0x1B6EECu;
    SET_GPR_U32(ctx, 31, 0x1B6EF4u);
    ctx->pc = 0x1B6EF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6EECu;
    // 0x1b6ef0: 0x2405003f  addiu       $a1, $zero, 0x3F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2230u, 0x1B6EECu, 0x1B6EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6EF4u;
label_1b6ef4:
    // 0x1b6ef4: 0x3c021f00  lui         $v0, 0x1F00
    ctx->pc = 0x1b6ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7936 << 16));
    // 0x1b6ef8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b6ef8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6efc: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1b6efcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1b6f00: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B6F00u;
    SET_GPR_U32(ctx, 31, 0x1B6F08u);
    ctx->pc = 0x1B6F04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6F00u;
    // 0x1b6f04: 0x344603ff  ori         $a2, $v0, 0x3FF (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1023);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B6F00u, 0x1B6F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6F08u;
label_1b6f08:
    // 0x1b6f08: 0x3c0300df  lui         $v1, 0xDF
    ctx->pc = 0x1b6f08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)223 << 16));
    // 0x1b6f0c: 0x3c0201ff  lui         $v0, 0x1FF
    ctx->pc = 0x1b6f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)511 << 16));
    // 0x1b6f10: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1b6f10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b6f14: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b6f14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6f18: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x1b6f18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1b6f1c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B6F1Cu;
    SET_GPR_U32(ctx, 31, 0x1B6F24u);
    ctx->pc = 0x1B6F20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6F1Cu;
    // 0x1b6f20: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B6F1Cu, 0x1B6F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6F24u;
label_1b6f24:
    // 0x1b6f24: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1b6f24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1b6f28: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b6f28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6f2c: 0x2405003b  addiu       $a1, $zero, 0x3B
    ctx->pc = 0x1b6f2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x1b6f30: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B6F30u;
    SET_GPR_U32(ctx, 31, 0x1B6F38u);
    ctx->pc = 0x1B6F34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6F30u;
    // 0x1b6f34: 0x2303c  dsll32      $a2, $v0, 0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B6F30u, 0x1B6F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6F38u;
label_1b6f38:
    // 0x1b6f38: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b6f38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6f3c: 0x24050048  addiu       $a1, $zero, 0x48
    ctx->pc = 0x1b6f3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1b6f40: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B6F40u;
    SET_GPR_U32(ctx, 31, 0x1B6F48u);
    ctx->pc = 0x1B6F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6F40u;
    // 0x1b6f44: 0x3c060003  lui         $a2, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)3 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B6F40u, 0x1B6F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6F48u;
label_1b6f48:
    // 0x1b6f48: 0x1eb182  srl         $s6, $fp, 6
    ctx->pc = 0x1b6f48u;
    SET_GPR_S32(ctx, 22, (int32_t)SRL32(GPR_U32(ctx, 30), 6));
    // 0x1b6f4c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b6f4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6f50: 0x16103c  dsll32      $v0, $s6, 0
    ctx->pc = 0x1b6f50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) << (32 + 0));
    // 0x1b6f54: 0x2405004d  addiu       $a1, $zero, 0x4D
    ctx->pc = 0x1b6f54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x1b6f58: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1b6f58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1b6f5c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1b6f5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1b6f60: 0xffa200d0  sd          $v0, 0xD0($sp)
    ctx->pc = 0x1b6f60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 2));
    // 0x1b6f64: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B6F64u;
    SET_GPR_U32(ctx, 31, 0x1B6F6Cu);
    ctx->pc = 0x1B6F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6F64u;
    // 0x1b6f68: 0x34460080  ori         $a2, $v0, 0x80 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B6F64u, 0x1B6F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6F6Cu;
label_1b6f6c:
    // 0x1b6f6c: 0x9ea678d0  lwu         $a2, 0x78D0($s5)
    ctx->pc = 0x1b6f6cu;
    SET_GPR_ZE32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 21), 30928)));
    // 0x1b6f70: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1b6f70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1b6f74: 0x3443000d  ori         $v1, $v0, 0xD
    ctx->pc = 0x1b6f74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13);
    // 0x1b6f78: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b6f78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6f7c: 0x3c025800  lui         $v0, 0x5800
    ctx->pc = 0x1b6f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22528 << 16));
    // 0x1b6f80: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1b6f80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b6f84: 0x34425600  ori         $v0, $v0, 0x5600
    ctx->pc = 0x1b6f84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)22016);
    // 0x1b6f88: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1b6f88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b6f8c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1b6f8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1b6f90: 0x6197c  dsll32      $v1, $a2, 5
    ctx->pc = 0x1b6f90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 5));
    // 0x1b6f94: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B6F94u;
    SET_GPR_U32(ctx, 31, 0x1B6F9Cu);
    ctx->pc = 0x1B6F98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6F94u;
    // 0x1b6f98: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B6F94u, 0x1B6F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6F9Cu;
label_1b6f9c:
    // 0x1b6f9c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b6f9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6fa0: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x1b6fa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1b6fa4: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B6FA4u;
    SET_GPR_U32(ctx, 31, 0x1B6FACu);
    ctx->pc = 0x1B6FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6FA4u;
    // 0x1b6fa8: 0x24060060  addiu       $a2, $zero, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B6FA4u, 0x1B6FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6FACu;
label_1b6fac:
    // 0x1b6fac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b6facu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b6fb0: 0x3c023a00  lui         $v0, 0x3A00
    ctx->pc = 0x1b6fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14848 << 16));
    // 0x1b6fb4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1b6fb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b6fb8: 0x344200c0  ori         $v0, $v0, 0xC0
    ctx->pc = 0x1b6fb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)192);
    // 0x1b6fbc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b6fbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6fc0: 0x2405004f  addiu       $a1, $zero, 0x4F
    ctx->pc = 0x1b6fc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x1b6fc4: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B6FC4u;
    SET_GPR_U32(ctx, 31, 0x1B6FCCu);
    ctx->pc = 0x1B6FC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6FC4u;
    // 0x1b6fc8: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B6FC4u, 0x1B6FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6FCCu;
label_1b6fcc:
    // 0x1b6fcc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b6fccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6fd0: 0xc07088c  jal         func_1C2230
    ctx->pc = 0x1B6FD0u;
    SET_GPR_U32(ctx, 31, 0x1B6FD8u);
    ctx->pc = 0x1B6FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6FD0u;
    // 0x1b6fd4: 0x2405003f  addiu       $a1, $zero, 0x3F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2230u, 0x1B6FD0u, 0x1B6FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6FD8u;
label_1b6fd8:
    // 0x1b6fd8: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x1b6fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x1b6fdc: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x1b6fdcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x1b6fe0: 0x2442f4f0  addiu       $v0, $v0, -0xB10
    ctx->pc = 0x1b6fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964464));
    // 0x1b6fe4: 0x27a30100  addiu       $v1, $sp, 0x100
    ctx->pc = 0x1b6fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1b6fe8: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x1b6fe8u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x40F4F0u));
    // 0x1b6fec: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1b6fecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1b6ff0: 0x24a56aa0  addiu       $a1, $a1, 0x6AA0
    ctx->pc = 0x1b6ff0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27296));
    // 0x1b6ff4: 0x268600e0  addiu       $a2, $s4, 0xE0
    ctx->pc = 0x1b6ff4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 224));
    // 0x1b6ff8: 0xc041442  jal         func_105108
    ctx->pc = 0x1B6FF8u;
    SET_GPR_U32(ctx, 31, 0x1B7000u);
    ctx->pc = 0x1B6FFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6FF8u;
    // 0x1b6ffc: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x1B6FF8u, 0x1B7000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7000u;
label_1b7000:
    // 0x1b7000: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x1b7000u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x1b7004: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x1b7004u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1b7008: 0x24a56aa0  addiu       $a1, $a1, 0x6AA0
    ctx->pc = 0x1b7008u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27296));
    // 0x1b700c: 0xc041442  jal         func_105108
    ctx->pc = 0x1B700Cu;
    SET_GPR_U32(ctx, 31, 0x1B7014u);
    ctx->pc = 0x1B7010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B700Cu;
    // 0x1b7010: 0x268600d0  addiu       $a2, $s4, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x1B700Cu, 0x1B7014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7014u;
label_1b7014:
    // 0x1b7014: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x1b7014u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x1b7018: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x1b7018u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x1b701c: 0xc041494  jal         func_105250
    ctx->pc = 0x1B701Cu;
    SET_GPR_U32(ctx, 31, 0x1B7024u);
    ctx->pc = 0x1B7020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B701Cu;
    // 0x1b7020: 0x24a56aa0  addiu       $a1, $a1, 0x6AA0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27296));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105250u, 0x1B701Cu, 0x1B7024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7024u;
label_1b7024:
    // 0x1b7024: 0x268400e0  addiu       $a0, $s4, 0xE0
    ctx->pc = 0x1b7024u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 224));
    // 0x1b7028: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x1b7028u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x1b702c: 0xc041442  jal         func_105108
    ctx->pc = 0x1B702Cu;
    SET_GPR_U32(ctx, 31, 0x1B7034u);
    ctx->pc = 0x1B7030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B702Cu;
    // 0x1b7030: 0x27a60100  addiu       $a2, $sp, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x1B702Cu, 0x1B7034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7034u;
label_1b7034:
    // 0x1b7034: 0xc04d7b4  jal         func_135ED0
    ctx->pc = 0x1B7034u;
    SET_GPR_U32(ctx, 31, 0x1B703Cu);
    ctx->pc = 0x1B7038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7034u;
    // 0x1b7038: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135ED0u, 0x1B7034u, 0x1B703Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B703Cu;
label_1b703c:
    // 0x1b703c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1b703cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1b7040: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1b7040u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b7044: 0x0  nop
    ctx->pc = 0x1b7044u;
    // NOP
    // 0x1b7048: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1b7048u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b704c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1B704Cu;
    {
        const bool branch_taken_0x1b704c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b704c) {
            ctx->pc = 0x1B7060u;
            goto label_1b7060;
        }
    }
    ctx->pc = 0x1B7054u;
    // 0x1b7054: 0xafa00110  sw          $zero, 0x110($sp)
    ctx->pc = 0x1b7054u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 0));
    // 0x1b7058: 0xafa00114  sw          $zero, 0x114($sp)
    ctx->pc = 0x1b7058u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 276), GPR_U32(ctx, 0));
    // 0x1b705c: 0xafa00118  sw          $zero, 0x118($sp)
    ctx->pc = 0x1b705cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 0));
label_1b7060:
    // 0x1b7060: 0x96820004  lhu         $v0, 0x4($s4)
    ctx->pc = 0x1b7060u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x1b7064: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x1b7064u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x1b7068: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B7068u;
    {
        const bool branch_taken_0x1b7068 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b7068) {
            ctx->pc = 0x1B7080u;
            goto label_1b7080;
        }
    }
    ctx->pc = 0x1B7070u;
    // 0x1b7070: 0xafa00120  sw          $zero, 0x120($sp)
    ctx->pc = 0x1b7070u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 0));
    // 0x1b7074: 0xafa00124  sw          $zero, 0x124($sp)
    ctx->pc = 0x1b7074u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 0));
    // 0x1b7078: 0xafa00128  sw          $zero, 0x128($sp)
    ctx->pc = 0x1b7078u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 0));
    // 0x1b707c: 0xafa0012c  sw          $zero, 0x12C($sp)
    ctx->pc = 0x1b707cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 0));
label_1b7080:
    // 0x1b7080: 0x3c023b44  lui         $v0, 0x3B44
    ctx->pc = 0x1b7080u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15172 << 16));
    // 0x1b7084: 0x34429ba6  ori         $v0, $v0, 0x9BA6
    ctx->pc = 0x1b7084u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39846);
    // 0x1b7088: 0x3c034680  lui         $v1, 0x4680
    ctx->pc = 0x1b7088u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18048 << 16));
    // 0x1b708c: 0x44822800  mtc1        $v0, $f5
    ctx->pc = 0x1b708cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x1b7090: 0xc7a30118  lwc1        $f3, 0x118($sp)
    ctx->pc = 0x1b7090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1b7094: 0xc7a40128  lwc1        $f4, 0x128($sp)
    ctx->pc = 0x1b7094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1b7098: 0x3c02399d  lui         $v0, 0x399D
    ctx->pc = 0x1b7098u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14749 << 16));
    // 0x1b709c: 0x34424952  ori         $v0, $v0, 0x4952
    ctx->pc = 0x1b709cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)18770);
    // 0x1b70a0: 0x44823000  mtc1        $v0, $f6
    ctx->pc = 0x1b70a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x1b70a4: 0xc7a10110  lwc1        $f1, 0x110($sp)
    ctx->pc = 0x1b70a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b70a8: 0xc68700a4  lwc1        $f7, 0xA4($s4)
    ctx->pc = 0x1b70a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x1b70ac: 0x3c023880  lui         $v0, 0x3880
    ctx->pc = 0x1b70acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14464 << 16));
    // 0x1b70b0: 0xc7a20120  lwc1        $f2, 0x120($sp)
    ctx->pc = 0x1b70b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b70b4: 0x460328c2  mul.s       $f3, $f5, $f3
    ctx->pc = 0x1b70b4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[5], ctx->f[3]);
    // 0x1b70b8: 0x4604281a  mula.s      $f5, $f4
    ctx->pc = 0x1b70b8u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[5], ctx->f[4]));
    // 0x1b70bc: 0x46071a1c  madd.s      $f8, $f3, $f7
    ctx->pc = 0x1b70bcu;
    ctx->f[8] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[7]));
    // 0x1b70c0: 0x4602301a  mula.s      $f6, $f2
    ctx->pc = 0x1b70c0u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[6], ctx->f[2]));
    // 0x1b70c4: 0x46013042  mul.s       $f1, $f6, $f1
    ctx->pc = 0x1b70c4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
    // 0x1b70c8: 0xc68000c0  lwc1        $f0, 0xC0($s4)
    ctx->pc = 0x1b70c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b70cc: 0x4607085c  madd.s      $f1, $f1, $f7
    ctx->pc = 0x1b70ccu;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[1], ctx->f[7]));
    // 0x1b70d0: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1b70d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b70d4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1b70d4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1b70d8: 0xe68000c0  swc1        $f0, 0xC0($s4)
    ctx->pc = 0x1b70d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 192), bits); }
    // 0x1b70dc: 0xc7a50114  lwc1        $f5, 0x114($sp)
    ctx->pc = 0x1b70dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1b70e0: 0xc68400a4  lwc1        $f4, 0xA4($s4)
    ctx->pc = 0x1b70e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1b70e4: 0xc7a30124  lwc1        $f3, 0x124($sp)
    ctx->pc = 0x1b70e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1b70e8: 0xc68000c4  lwc1        $f0, 0xC4($s4)
    ctx->pc = 0x1b70e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b70ec: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1b70ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b70f0: 0x46053142  mul.s       $f5, $f6, $f5
    ctx->pc = 0x1b70f0u;
    ctx->f[5] = FPU_MUL_S(ctx->f[6], ctx->f[5]);
    // 0x1b70f4: 0x4604281a  mula.s      $f5, $f4
    ctx->pc = 0x1b70f4u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[5], ctx->f[4]));
    // 0x1b70f8: 0x460330dc  madd.s      $f3, $f6, $f3
    ctx->pc = 0x1b70f8u;
    ctx->f[3] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[6], ctx->f[3]));
    // 0x1b70fc: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x1b70fcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x1b7100: 0xe68000c4  swc1        $f0, 0xC4($s4)
    ctx->pc = 0x1b7100u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 196), bits); }
    // 0x1b7104: 0xc68000c8  lwc1        $f0, 0xC8($s4)
    ctx->pc = 0x1b7104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b7108: 0x46080001  sub.s       $f0, $f0, $f8
    ctx->pc = 0x1b7108u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[8]);
    // 0x1b710c: 0xe68000c8  swc1        $f0, 0xC8($s4)
    ctx->pc = 0x1b710cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 200), bits); }
    // 0x1b7110: 0xc68000cc  lwc1        $f0, 0xCC($s4)
    ctx->pc = 0x1b7110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b7114: 0x46080001  sub.s       $f0, $f0, $f8
    ctx->pc = 0x1b7114u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[8]);
    // 0x1b7118: 0xe68000cc  swc1        $f0, 0xCC($s4)
    ctx->pc = 0x1b7118u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 204), bits); }
    // 0x1b711c: 0xc68000c0  lwc1        $f0, 0xC0($s4)
    ctx->pc = 0x1b711cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b7120: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1b7120u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1b7124: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1b7124u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1b7128: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1b7128u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1b712c: 0x0  nop
    ctx->pc = 0x1b712cu;
    // NOP
    // 0x1b7130: 0x30423fff  andi        $v0, $v0, 0x3FFF
    ctx->pc = 0x1b7130u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16383);
    // 0x1b7134: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b7134u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b7138: 0x0  nop
    ctx->pc = 0x1b7138u;
    // NOP
    // 0x1b713c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b713cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1b7140: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1b7140u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1b7144: 0xe68000c0  swc1        $f0, 0xC0($s4)
    ctx->pc = 0x1b7144u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 192), bits); }
    // 0x1b7148: 0xc68000c4  lwc1        $f0, 0xC4($s4)
    ctx->pc = 0x1b7148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b714c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1b714cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1b7150: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1b7150u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1b7154: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1b7154u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1b7158: 0x0  nop
    ctx->pc = 0x1b7158u;
    // NOP
    // 0x1b715c: 0x30423fff  andi        $v0, $v0, 0x3FFF
    ctx->pc = 0x1b715cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16383);
    // 0x1b7160: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b7160u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b7164: 0x0  nop
    ctx->pc = 0x1b7164u;
    // NOP
    // 0x1b7168: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b7168u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1b716c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1b716cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1b7170: 0xe68000c4  swc1        $f0, 0xC4($s4)
    ctx->pc = 0x1b7170u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 196), bits); }
    // 0x1b7174: 0xc68000c8  lwc1        $f0, 0xC8($s4)
    ctx->pc = 0x1b7174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b7178: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1b7178u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1b717c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1b717cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1b7180: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1b7180u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1b7184: 0x0  nop
    ctx->pc = 0x1b7184u;
    // NOP
    // 0x1b7188: 0x30423fff  andi        $v0, $v0, 0x3FFF
    ctx->pc = 0x1b7188u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16383);
    // 0x1b718c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b718cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b7190: 0x0  nop
    ctx->pc = 0x1b7190u;
    // NOP
    // 0x1b7194: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b7194u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1b7198: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1b7198u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1b719c: 0xe68000c8  swc1        $f0, 0xC8($s4)
    ctx->pc = 0x1b719cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 200), bits); }
    // 0x1b71a0: 0xc68000cc  lwc1        $f0, 0xCC($s4)
    ctx->pc = 0x1b71a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b71a4: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1b71a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1b71a8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1b71a8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1b71ac: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1b71acu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1b71b0: 0x0  nop
    ctx->pc = 0x1b71b0u;
    // NOP
    // 0x1b71b4: 0x30423fff  andi        $v0, $v0, 0x3FFF
    ctx->pc = 0x1b71b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16383);
    // 0x1b71b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b71b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b71bc: 0x0  nop
    ctx->pc = 0x1b71bcu;
    // NOP
    // 0x1b71c0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b71c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1b71c4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1b71c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1b71c8: 0xe68000cc  swc1        $f0, 0xCC($s4)
    ctx->pc = 0x1b71c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 204), bits); }
    // 0x1b71cc: 0x8e820098  lw          $v0, 0x98($s4)
    ctx->pc = 0x1b71ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 152)));
    // 0x1b71d0: 0x10400085  beqz        $v0, . + 4 + (0x85 << 2)
    ctx->pc = 0x1B71D0u;
    {
        const bool branch_taken_0x1b71d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B71D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B71D0u;
        // 0x1b71d4: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b71d0) {
            ctx->pc = 0x1B73E8u;
            goto label_1b73e8;
        }
    }
    ctx->pc = 0x1B71D8u;
    // 0x1b71d8: 0x27c3ffff  addiu       $v1, $fp, -0x1
    ctx->pc = 0x1b71d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 4294967295));
    // 0x1b71dc: 0x27c20700  addiu       $v0, $fp, 0x700
    ctx->pc = 0x1b71dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 1792));
    // 0x1b71e0: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1b71e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b71e4: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1b71e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1b71e8: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1b71e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1b71ec: 0x4143c  dsll32      $v0, $a0, 16
    ctx->pc = 0x1b71ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 16));
    // 0x1b71f0: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1b71f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b71f4: 0xffa200e0  sd          $v0, 0xE0($sp)
    ctx->pc = 0x1b71f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 2));
    // 0x1b71f8: 0x27c30790  addiu       $v1, $fp, 0x790
    ctx->pc = 0x1b71f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 1936));
    // 0x1b71fc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1b71fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b7200: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1b7200u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1b7204: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b7204u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b7208: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1b7208u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b720c: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1b720cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1b7210: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1b7210u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1b7214: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1b7214u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1b7218: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1b7218u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1b721c: 0x70021389  pcpyld      $v0, $zero, $v0
    ctx->pc = 0x1b721cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x1b7220: 0x62b825  or          $s7, $v1, $v0
    ctx->pc = 0x1b7220u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1b7224: 0x0  nop
    ctx->pc = 0x1b7224u;
    // NOP
label_1b7228:
    // 0x1b7228: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1b7228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1b722c: 0x2621007  srav        $v0, $v0, $s3
    ctx->pc = 0x1b722cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 19) & 0x1F));
    // 0x1b7230: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b7230u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7234: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b7234u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b7238: 0x24050043  addiu       $a1, $zero, 0x43
    ctx->pc = 0x1b7238u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x1b723c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1b723cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1b7240: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b7240u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b7244: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B7244u;
    SET_GPR_U32(ctx, 31, 0x1B724Cu);
    ctx->pc = 0x1B7248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7244u;
    // 0x1b7248: 0x34460068  ori         $a2, $v0, 0x68 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)104);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B7244u, 0x1B724Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B724Cu;
label_1b724c:
    // 0x1b724c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b724cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b7250: 0x16620007  bne         $s3, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B7250u;
    {
        const bool branch_taken_0x1b7250 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x1B7254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7250u;
        // 0x1b7254: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7250) {
            ctx->pc = 0x1B7270u;
            goto label_1b7270;
        }
    }
    ctx->pc = 0x1B7258u;
    // 0x1b7258: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b7258u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b725c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B725Cu;
    SET_GPR_U32(ctx, 31, 0x1B7264u);
    ctx->pc = 0x1B7260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B725Cu;
    // 0x1b7260: 0x24060216  addiu       $a2, $zero, 0x216 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 534));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B725Cu, 0x1B7264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7264u;
label_1b7264:
    // 0x1b7264: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1B7264u;
    {
        const bool branch_taken_0x1b7264 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b7264) {
            ctx->pc = 0x1B7280u;
            goto label_1b7280;
        }
    }
    ctx->pc = 0x1B726Cu;
    // 0x1b726c: 0x0  nop
    ctx->pc = 0x1b726cu;
    // NOP
label_1b7270:
    // 0x1b7270: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b7270u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7274: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b7274u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7278: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B7278u;
    SET_GPR_U32(ctx, 31, 0x1B7280u);
    ctx->pc = 0x1B727Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7278u;
    // 0x1b727c: 0x24060256  addiu       $a2, $zero, 0x256 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 598));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B7278u, 0x1B7280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7280u;
label_1b7280:
    // 0x1b7280: 0x6600004  bltz        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B7280u;
    {
        const bool branch_taken_0x1b7280 = (GPR_S64(ctx, 19) < 0);
        ctx->pc = 0x1B7284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7280u;
        // 0x1b7284: 0x131842  srl         $v1, $s3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7280) {
            ctx->pc = 0x1B7294u;
            goto label_1b7294;
        }
    }
    ctx->pc = 0x1B7288u;
    // 0x1b7288: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x1b7288u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b728c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1B728Cu;
    {
        const bool branch_taken_0x1b728c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B728Cu;
        // 0x1b7290: 0x46800120  cvt.s.w     $f4, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b728c) {
            ctx->pc = 0x1B72ACu;
            goto label_1b72ac;
        }
    }
    ctx->pc = 0x1B7294u;
label_1b7294:
    // 0x1b7294: 0x32620001  andi        $v0, $s3, 0x1
    ctx->pc = 0x1b7294u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
    // 0x1b7298: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1b7298u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1b729c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b729cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b72a0: 0x0  nop
    ctx->pc = 0x1b72a0u;
    // NOP
    // 0x1b72a4: 0x46800120  cvt.s.w     $f4, $f0
    ctx->pc = 0x1b72a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x1b72a8: 0x46042100  add.s       $f4, $f4, $f4
    ctx->pc = 0x1b72a8u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[4]);
label_1b72ac:
    // 0x1b72ac: 0xc681009c  lwc1        $f1, 0x9C($s4)
    ctx->pc = 0x1b72acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b72b0: 0x16082b  sltu        $at, $zero, $s6
    ctx->pc = 0x1b72b0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
    // 0x1b72b4: 0xc68000a0  lwc1        $f0, 0xA0($s4)
    ctx->pc = 0x1b72b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b72b8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1b72b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b72bc: 0xc68300c0  lwc1        $f3, 0xC0($s4)
    ctx->pc = 0x1b72bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1b72c0: 0xc68200c4  lwc1        $f2, 0xC4($s4)
    ctx->pc = 0x1b72c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b72c4: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x1b72c4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x1b72c8: 0x10200041  beqz        $at, . + 4 + (0x41 << 2)
    ctx->pc = 0x1B72C8u;
    {
        const bool branch_taken_0x1b72c8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B72CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B72C8u;
        // 0x1b72cc: 0x46040002  mul.s       $f0, $f0, $f4 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b72c8) {
            ctx->pc = 0x1B73D0u;
            goto label_1b73d0;
        }
    }
    ctx->pc = 0x1B72D0u;
    // 0x1b72d0: 0x460415c2  mul.s       $f23, $f2, $f4
    ctx->pc = 0x1b72d0u;
    ctx->f[23] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x1b72d4: 0x2411003f  addiu       $s1, $zero, 0x3F
    ctx->pc = 0x1b72d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x1b72d8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1b72d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b72dc: 0x46041d82  mul.s       $f22, $f3, $f4
    ctx->pc = 0x1b72dcu;
    ctx->f[22] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x1b72e0: 0x46170540  add.s       $f21, $f0, $f23
    ctx->pc = 0x1b72e0u;
    ctx->f[21] = FPU_ADD_S(ctx->f[0], ctx->f[23]);
    // 0x1b72e4: 0x46160d00  add.s       $f20, $f1, $f22
    ctx->pc = 0x1b72e4u;
    ctx->f[20] = FPU_ADD_S(ctx->f[1], ctx->f[22]);
label_1b72e8:
    // 0x1b72e8: 0x11103c  dsll32      $v0, $s1, 0
    ctx->pc = 0x1b72e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 0));
    // 0x1b72ec: 0x10183c  dsll32      $v1, $s0, 0
    ctx->pc = 0x1b72ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 0));
    // 0x1b72f0: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1b72f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1b72f4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1b72f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1b72f8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1b72f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1b72fc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1b72fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1b7300: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b7300u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7304: 0xdfa200e0  ld          $v0, 0xE0($sp)
    ctx->pc = 0x1b7304u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1b7308: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x1b7308u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1b730c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B730Cu;
    SET_GPR_U32(ctx, 31, 0x1B7314u);
    ctx->pc = 0x1B7310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B730Cu;
    // 0x1b7310: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B730Cu, 0x1B7314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7314u;
label_1b7314:
    // 0x1b7314: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b7314u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7318: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1b7318u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b731c: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x1b731cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x1b7320: 0xc070870  jal         func_1C21C0
    ctx->pc = 0x1B7320u;
    SET_GPR_U32(ctx, 31, 0x1B7328u);
    ctx->pc = 0x1B7324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7320u;
    // 0x1b7324: 0x4600bb46  mov.s       $f13, $f23 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[23]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C21C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C21C0u, 0x1B7320u, 0x1B7328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7328u;
label_1b7328:
    // 0x1b7328: 0x34028080  ori         $v0, $zero, 0x8080
    ctx->pc = 0x1b7328u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x1b732c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1b732cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1b7330: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1b7330u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1b7334: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1b7334u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b7338: 0x34428080  ori         $v0, $v0, 0x8080
    ctx->pc = 0x1b7338u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    // 0x1b733c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b733cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7340: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b7340u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b7344: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B7344u;
    SET_GPR_U32(ctx, 31, 0x1B734Cu);
    ctx->pc = 0x1B7348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7344u;
    // 0x1b7348: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B7344u, 0x1B734Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B734Cu;
label_1b734c:
    // 0x1b734c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1b734cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b7350: 0x3c027900  lui         $v0, 0x7900
    ctx->pc = 0x1b7350u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30976 << 16));
    // 0x1b7354: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1b7354u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b7358: 0x34427000  ori         $v0, $v0, 0x7000
    ctx->pc = 0x1b7358u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28672);
    // 0x1b735c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1b735cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1b7360: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b7360u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7364: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1b7364u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1b7368: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B7368u;
    SET_GPR_U32(ctx, 31, 0x1B7370u);
    ctx->pc = 0x1B736Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7368u;
    // 0x1b736c: 0x70023389  pcpyld      $a2, $zero, $v0 (Delay Slot)
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B7368u, 0x1B7370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7370u;
label_1b7370:
    // 0x1b7370: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b7370u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7374: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1b7374u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b7378: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1b7378u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1b737c: 0xc070870  jal         func_1C21C0
    ctx->pc = 0x1B737Cu;
    SET_GPR_U32(ctx, 31, 0x1B7384u);
    ctx->pc = 0x1B7380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B737Cu;
    // 0x1b7380: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C21C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C21C0u, 0x1B737Cu, 0x1B7384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7384u;
label_1b7384:
    // 0x1b7384: 0x34028080  ori         $v0, $zero, 0x8080
    ctx->pc = 0x1b7384u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x1b7388: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1b7388u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1b738c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1b738cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1b7390: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1b7390u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b7394: 0x34428080  ori         $v0, $v0, 0x8080
    ctx->pc = 0x1b7394u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    // 0x1b7398: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b7398u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b739c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b739cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b73a0: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B73A0u;
    SET_GPR_U32(ctx, 31, 0x1B73A8u);
    ctx->pc = 0x1B73A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B73A0u;
    // 0x1b73a4: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B73A0u, 0x1B73A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B73A8u;
label_1b73a8:
    // 0x1b73a8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b73a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b73ac: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1b73acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1b73b0: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B73B0u;
    SET_GPR_U32(ctx, 31, 0x1B73B8u);
    ctx->pc = 0x1B73B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B73B0u;
    // 0x1b73b4: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B73B0u, 0x1B73B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B73B8u;
label_1b73b8:
    // 0x1b73b8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1b73b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1b73bc: 0x26310040  addiu       $s1, $s1, 0x40
    ctx->pc = 0x1b73bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x1b73c0: 0x256102b  sltu        $v0, $s2, $s6
    ctx->pc = 0x1b73c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
    // 0x1b73c4: 0x1440ffc8  bnez        $v0, . + 4 + (-0x38 << 2)
    ctx->pc = 0x1B73C4u;
    {
        const bool branch_taken_0x1b73c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B73C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B73C4u;
        // 0x1b73c8: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b73c4) {
            ctx->pc = 0x1B72E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b72e8;
        }
    }
    ctx->pc = 0x1B73CCu;
    // 0x1b73cc: 0x0  nop
    ctx->pc = 0x1b73ccu;
    // NOP
label_1b73d0:
    // 0x1b73d0: 0x8e820098  lw          $v0, 0x98($s4)
    ctx->pc = 0x1b73d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 152)));
    // 0x1b73d4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1b73d4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1b73d8: 0x53082b  sltu        $at, $v0, $s3
    ctx->pc = 0x1b73d8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x1b73dc: 0x1020ff92  beqz        $at, . + 4 + (-0x6E << 2)
    ctx->pc = 0x1B73DCu;
    {
        const bool branch_taken_0x1b73dc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b73dc) {
            ctx->pc = 0x1B7228u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b7228;
        }
    }
    ctx->pc = 0x1B73E4u;
    // 0x1b73e4: 0x0  nop
    ctx->pc = 0x1b73e4u;
    // NOP
label_1b73e8:
    // 0x1b73e8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b73e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b73ec: 0xc07088c  jal         func_1C2230
    ctx->pc = 0x1B73ECu;
    SET_GPR_U32(ctx, 31, 0x1B73F4u);
    ctx->pc = 0x1B73F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B73ECu;
    // 0x1b73f0: 0x2405003f  addiu       $a1, $zero, 0x3F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2230u, 0x1B73ECu, 0x1B73F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B73F4u;
label_1b73f4:
    // 0x1b73f4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b73f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b73f8: 0x3c023a00  lui         $v0, 0x3A00
    ctx->pc = 0x1b73f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14848 << 16));
    // 0x1b73fc: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1b73fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b7400: 0x344200c0  ori         $v0, $v0, 0xC0
    ctx->pc = 0x1b7400u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)192);
    // 0x1b7404: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b7404u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7408: 0x2405004f  addiu       $a1, $zero, 0x4F
    ctx->pc = 0x1b7408u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x1b740c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B740Cu;
    SET_GPR_U32(ctx, 31, 0x1B7414u);
    ctx->pc = 0x1B7410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B740Cu;
    // 0x1b7410: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B740Cu, 0x1B7414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7414u;
label_1b7414:
    // 0x1b7414: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b7414u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7418: 0x24050048  addiu       $a1, $zero, 0x48
    ctx->pc = 0x1b7418u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1b741c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B741Cu;
    SET_GPR_U32(ctx, 31, 0x1B7424u);
    ctx->pc = 0x1B7420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B741Cu;
    // 0x1b7420: 0x3c060003  lui         $a2, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)3 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B741Cu, 0x1B7424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7424u;
label_1b7424:
    // 0x1b7424: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b7424u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7428: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x1b7428u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1b742c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B742Cu;
    SET_GPR_U32(ctx, 31, 0x1B7434u);
    ctx->pc = 0x1B7430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B742Cu;
    // 0x1b7430: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B742Cu, 0x1B7434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7434u;
label_1b7434:
    // 0x1b7434: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x1b7434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1b7438: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b7438u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b743c: 0x2405003b  addiu       $a1, $zero, 0x3B
    ctx->pc = 0x1b743cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x1b7440: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B7440u;
    SET_GPR_U32(ctx, 31, 0x1B7448u);
    ctx->pc = 0x1B7444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7440u;
    // 0x1b7444: 0x2303c  dsll32      $a2, $v0, 0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B7440u, 0x1B7448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7448u;
label_1b7448:
    // 0x1b7448: 0x27c2ffff  addiu       $v0, $fp, -0x1
    ctx->pc = 0x1b7448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 4294967295));
    // 0x1b744c: 0x1e9840  sll         $s3, $fp, 1
    ctx->pc = 0x1b744cu;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 30), 1));
    // 0x1b7450: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b7450u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b7454: 0x13803c  dsll32      $s0, $s3, 0
    ctx->pc = 0x1b7454u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 19) << (32 + 0));
    // 0x1b7458: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1b7458u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1b745c: 0x10803e  dsrl32      $s0, $s0, 0
    ctx->pc = 0x1b745cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> (32 + 0));
    // 0x1b7460: 0x21bb8  dsll        $v1, $v0, 14
    ctx->pc = 0x1b7460u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 14);
    // 0x1b7464: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b7464u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7468: 0x1010bc  dsll32      $v0, $s0, 2
    ctx->pc = 0x1b7468u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 2));
    // 0x1b746c: 0x3463000a  ori         $v1, $v1, 0xA
    ctx->pc = 0x1b746cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)10);
    // 0x1b7470: 0x623025  or          $a2, $v1, $v0
    ctx->pc = 0x1b7470u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1b7474: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B7474u;
    SET_GPR_U32(ctx, 31, 0x1B747Cu);
    ctx->pc = 0x1B7478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7474u;
    // 0x1b7478: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B7474u, 0x1B747Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B747Cu;
label_1b747c:
    // 0x1b747c: 0x16103c  dsll32      $v0, $s6, 0
    ctx->pc = 0x1b747cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) << (32 + 0));
    // 0x1b7480: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b7480u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7484: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1b7484u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1b7488: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x1b7488u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b748c: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1B748Cu;
    SET_GPR_U32(ctx, 31, 0x1B7494u);
    ctx->pc = 0x1B7490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B748Cu;
    // 0x1b7490: 0x2bbb8  dsll        $s7, $v0, 14 (Delay Slot)
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) << 14);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1B748Cu, 0x1B7494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7494u;
label_1b7494:
    // 0x1b7494: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1b7494u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b7498: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b7498u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b749c: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x1b749cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x1b74a0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1b74a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1b74a4: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x1b74a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x1b74a8: 0x31eb8  dsll        $v1, $v1, 26
    ctx->pc = 0x1b74a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 26);
    // 0x1b74ac: 0x2e21025  or          $v0, $s7, $v0
    ctx->pc = 0x1b74acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) | GPR_U64(ctx, 2));
    // 0x1b74b0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1b74b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b74b4: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1B74B4u;
    SET_GPR_U32(ctx, 31, 0x1B74BCu);
    ctx->pc = 0x1B74B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B74B4u;
    // 0x1b74b8: 0x438825  or          $s1, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1B74B4u, 0x1B74BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B74BCu;
label_1b74bc:
    // 0x1b74bc: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1b74bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b74c0: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1b74c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b74c4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1b74c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1b74c8: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1b74c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1b74cc: 0x31fb8  dsll        $v1, $v1, 30
    ctx->pc = 0x1b74ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 30);
    // 0x1b74d0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b74d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b74d4: 0x2232025  or          $a0, $s1, $v1
    ctx->pc = 0x1b74d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) | GPR_U64(ctx, 3));
    // 0x1b74d8: 0x9ea378d0  lwu         $v1, 0x78D0($s5)
    ctx->pc = 0x1b74d8u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 21), 30928)));
    // 0x1b74dc: 0x823025  or          $a2, $a0, $v0
    ctx->pc = 0x1b74dcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1b74e0: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1b74e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1b74e4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b74e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b74e8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b74e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b74ec: 0x3197c  dsll32      $v1, $v1, 5
    ctx->pc = 0x1b74ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 5));
    // 0x1b74f0: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1b74f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1b74f4: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B74F4u;
    SET_GPR_U32(ctx, 31, 0x1B74FCu);
    ctx->pc = 0x1B74F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B74F4u;
    // 0x1b74f8: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B74F4u, 0x1B74FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B74FCu;
label_1b74fc:
    // 0x1b74fc: 0x3c020200  lui         $v0, 0x200
    ctx->pc = 0x1b74fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
    // 0x1b7500: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b7500u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7504: 0x34430080  ori         $v1, $v0, 0x80
    ctx->pc = 0x1b7504u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x1b7508: 0x2405004d  addiu       $a1, $zero, 0x4D
    ctx->pc = 0x1b7508u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x1b750c: 0xdfa200d0  ld          $v0, 0xD0($sp)
    ctx->pc = 0x1b750cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1b7510: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B7510u;
    SET_GPR_U32(ctx, 31, 0x1B7518u);
    ctx->pc = 0x1B7514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7510u;
    // 0x1b7514: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B7510u, 0x1B7518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7518u;
label_1b7518:
    // 0x1b7518: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b7518u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b751c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b751cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7520: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B7520u;
    SET_GPR_U32(ctx, 31, 0x1B7528u);
    ctx->pc = 0x1B7524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7520u;
    // 0x1b7524: 0x24060316  addiu       $a2, $zero, 0x316 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 790));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B7520u, 0x1B7528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7528u;
label_1b7528:
    // 0x1b7528: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x1b7528u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x1b752c: 0x27c40708  addiu       $a0, $fp, 0x708
    ctx->pc = 0x1b752cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 1800));
    // 0x1b7530: 0xffa200f0  sd          $v0, 0xF0($sp)
    ctx->pc = 0x1b7530u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 2));
    // 0x1b7534: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1b7534u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7538: 0x1e1100  sll         $v0, $fp, 4
    ctx->pc = 0x1b7538u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 30), 4));
    // 0x1b753c: 0x2411001f  addiu       $s1, $zero, 0x1F
    ctx->pc = 0x1b753cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x1b7540: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x1b7540u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    // 0x1b7544: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1b7544u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7548: 0x131100  sll         $v0, $s3, 4
    ctx->pc = 0x1b7548u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x1b754c: 0x24430009  addiu       $v1, $v0, 0x9
    ctx->pc = 0x1b754cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 9));
    // 0x1b7550: 0x26620790  addiu       $v0, $s3, 0x790
    ctx->pc = 0x1b7550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1936));
    // 0x1b7554: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1b7554u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b7558: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1b7558u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1b755c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1b755cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1b7560: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b7560u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b7564: 0x32c38  dsll        $a1, $v1, 16
    ctx->pc = 0x1b7564u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << 16);
    // 0x1b7568: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1b7568u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1b756c: 0x21c38  dsll        $v1, $v0, 16
    ctx->pc = 0x1b756cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 16);
    // 0x1b7570: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1b7570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1b7574: 0x24420009  addiu       $v0, $v0, 0x9
    ctx->pc = 0x1b7574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9));
    // 0x1b7578: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b7578u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b757c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1b757cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1b7580: 0xffa200b0  sd          $v0, 0xB0($sp)
    ctx->pc = 0x1b7580u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 2));
    // 0x1b7584: 0x459825  or          $s3, $v0, $a1
    ctx->pc = 0x1b7584u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x1b7588: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x1b7588u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1b758c: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x1b758cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b7590: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1b7590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b7594: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1b7594u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1b7598: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b7598u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b759c: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1b759cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1b75a0: 0x70021389  pcpyld      $v0, $zero, $v0
    ctx->pc = 0x1b75a0u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x1b75a4: 0x62b025  or          $s6, $v1, $v0
    ctx->pc = 0x1b75a4u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1b75a8:
    // 0x1b75a8: 0x11103c  dsll32      $v0, $s1, 0
    ctx->pc = 0x1b75a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 0));
    // 0x1b75ac: 0x10183c  dsll32      $v1, $s0, 0
    ctx->pc = 0x1b75acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 0));
    // 0x1b75b0: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1b75b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1b75b4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1b75b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1b75b8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1b75b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1b75bc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1b75bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1b75c0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b75c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b75c4: 0xdfa200f0  ld          $v0, 0xF0($sp)
    ctx->pc = 0x1b75c4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1b75c8: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x1b75c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1b75cc: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B75CCu;
    SET_GPR_U32(ctx, 31, 0x1B75D4u);
    ctx->pc = 0x1B75D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B75CCu;
    // 0x1b75d0: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B75CCu, 0x1B75D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B75D4u;
label_1b75d4:
    // 0x1b75d4: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1b75d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x1b75d8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b75d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b75dc: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1b75dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b75e0: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B75E0u;
    SET_GPR_U32(ctx, 31, 0x1B75E8u);
    ctx->pc = 0x1B75E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B75E0u;
    // 0x1b75e4: 0x34460008  ori         $a2, $v0, 0x8 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B75E0u, 0x1B75E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B75E8u;
label_1b75e8:
    // 0x1b75e8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1b75e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b75ec: 0x3c027900  lui         $v0, 0x7900
    ctx->pc = 0x1b75ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30976 << 16));
    // 0x1b75f0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1b75f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b75f4: 0x34427080  ori         $v0, $v0, 0x7080
    ctx->pc = 0x1b75f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28800);
    // 0x1b75f8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1b75f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1b75fc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b75fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7600: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1b7600u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1b7604: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B7604u;
    SET_GPR_U32(ctx, 31, 0x1B760Cu);
    ctx->pc = 0x1B7608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7604u;
    // 0x1b7608: 0x70023389  pcpyld      $a2, $zero, $v0 (Delay Slot)
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B7604u, 0x1B760Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B760Cu;
label_1b760c:
    // 0x1b760c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b760cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7610: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1b7610u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b7614: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B7614u;
    SET_GPR_U32(ctx, 31, 0x1B761Cu);
    ctx->pc = 0x1B7618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7614u;
    // 0x1b7618: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B7614u, 0x1B761Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B761Cu;
label_1b761c:
    // 0x1b761c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b761cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7620: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1b7620u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1b7624: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B7624u;
    SET_GPR_U32(ctx, 31, 0x1B762Cu);
    ctx->pc = 0x1B7628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7624u;
    // 0x1b7628: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B7624u, 0x1B762Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B762Cu;
label_1b762c:
    // 0x1b762c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1b762cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1b7630: 0x26310020  addiu       $s1, $s1, 0x20
    ctx->pc = 0x1b7630u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x1b7634: 0x2e420008  sltiu       $v0, $s2, 0x8
    ctx->pc = 0x1b7634u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x1b7638: 0x1440ffdb  bnez        $v0, . + 4 + (-0x25 << 2)
    ctx->pc = 0x1B7638u;
    {
        const bool branch_taken_0x1b7638 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B763Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7638u;
        // 0x1b763c: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7638) {
            ctx->pc = 0x1B75A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b75a8;
        }
    }
    ctx->pc = 0x1B7640u;
    // 0x1b7640: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b7640u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7644: 0xc07088c  jal         func_1C2230
    ctx->pc = 0x1B7644u;
    SET_GPR_U32(ctx, 31, 0x1B764Cu);
    ctx->pc = 0x1B7648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7644u;
    // 0x1b7648: 0x2405003f  addiu       $a1, $zero, 0x3F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2230u, 0x1B7644u, 0x1B764Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B764Cu;
label_1b764c:
    // 0x1b764c: 0x8e880064  lw          $t0, 0x64($s4)
    ctx->pc = 0x1b764cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 100)));
    // 0x1b7650: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b7650u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7654: 0x8e8b0088  lw          $t3, 0x88($s4)
    ctx->pc = 0x1b7654u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 136)));
    // 0x1b7658: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x1b7658u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x1b765c: 0x26860014  addiu       $a2, $s4, 0x14
    ctx->pc = 0x1b765cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 20));
    // 0x1b7660: 0x26870054  addiu       $a3, $s4, 0x54
    ctx->pc = 0x1b7660u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 84));
    // 0x1b7664: 0x26890068  addiu       $t1, $s4, 0x68
    ctx->pc = 0x1b7664u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 20), 104));
    // 0x1b7668: 0xc070774  jal         func_1C1DD0
    ctx->pc = 0x1B7668u;
    SET_GPR_U32(ctx, 31, 0x1B7670u);
    ctx->pc = 0x1B766Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7668u;
    // 0x1b766c: 0x268a0078  addiu       $t2, $s4, 0x78 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 20), 120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1DD0u, 0x1B7668u, 0x1B7670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7670u;
label_1b7670:
    // 0x1b7670: 0x8ea578d0  lw          $a1, 0x78D0($s5)
    ctx->pc = 0x1b7670u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 30928)));
    // 0x1b7674: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b7674u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7678: 0xc070468  jal         func_1C11A0
    ctx->pc = 0x1B7678u;
    SET_GPR_U32(ctx, 31, 0x1B7680u);
    ctx->pc = 0x1B767Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7678u;
    // 0x1b767c: 0x3c067000  lui         $a2, 0x7000 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28672 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C11A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C11A0u, 0x1B7678u, 0x1B7680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7680u;
label_1b7680:
    // 0x1b7680: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x1b7680u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x1b7684: 0x3c034400  lui         $v1, 0x4400
    ctx->pc = 0x1b7684u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17408 << 16));
    // 0x1b7688: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1b7688u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b768c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b768cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7690: 0xc68300c8  lwc1        $f3, 0xC8($s4)
    ctx->pc = 0x1b7690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1b7694: 0x2405003b  addiu       $a1, $zero, 0x3B
    ctx->pc = 0x1b7694u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x1b7698: 0x3c024360  lui         $v0, 0x4360
    ctx->pc = 0x1b7698u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17248 << 16));
    // 0x1b769c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b769cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b76a0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1b76a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b76a4: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1b76a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1b76a8: 0xc68400ac  lwc1        $f4, 0xAC($s4)
    ctx->pc = 0x1b76a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1b76ac: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x1b76acu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x1b76b0: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x1b76b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x1b76b4: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x1b76b4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x1b76b8: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1b76b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1b76bc: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x1b76bcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x1b76c0: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x1b76c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x1b76c4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1b76c4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1b76c8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1b76c8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1b76cc: 0x44100800  mfc1        $s0, $f1
    ctx->pc = 0x1b76ccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
    // 0x1b76d0: 0x44160000  mfc1        $s6, $f0
    ctx->pc = 0x1b76d0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 22, bits); }
    // 0x1b76d4: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B76D4u;
    SET_GPR_U32(ctx, 31, 0x1B76DCu);
    ctx->pc = 0x1B76D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B76D4u;
    // 0x1b76d8: 0x2303c  dsll32      $a2, $v0, 0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B76D4u, 0x1B76DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B76DCu;
label_1b76dc:
    // 0x1b76dc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b76dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b76e0: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1B76E0u;
    SET_GPR_U32(ctx, 31, 0x1B76E8u);
    ctx->pc = 0x1B76E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B76E0u;
    // 0x1b76e4: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1B76E0u, 0x1B76E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B76E8u;
label_1b76e8:
    // 0x1b76e8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b76e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b76ec: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x1b76ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b76f0: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1b76f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1b76f4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b76f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b76f8: 0x21eb8  dsll        $v1, $v0, 26
    ctx->pc = 0x1b76f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 26);
    // 0x1b76fc: 0x3c0201b0  lui         $v0, 0x1B0
    ctx->pc = 0x1b76fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)432 << 16));
    // 0x1b7700: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x1b7700u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x1b7704: 0x2e21025  or          $v0, $s7, $v0
    ctx->pc = 0x1b7704u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) | GPR_U64(ctx, 2));
    // 0x1b7708: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1B7708u;
    SET_GPR_U32(ctx, 31, 0x1B7710u);
    ctx->pc = 0x1B770Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7708u;
    // 0x1b770c: 0x438825  or          $s1, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1B7708u, 0x1B7710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7710u;
label_1b7710:
    // 0x1b7710: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1b7710u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b7714: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1b7714u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b7718: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1b7718u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1b771c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1b771cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b7720: 0x31fb8  dsll        $v1, $v1, 30
    ctx->pc = 0x1b7720u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 30);
    // 0x1b7724: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b7724u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b7728: 0x2232025  or          $a0, $s1, $v1
    ctx->pc = 0x1b7728u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) | GPR_U64(ctx, 3));
    // 0x1b772c: 0x9ea378d0  lwu         $v1, 0x78D0($s5)
    ctx->pc = 0x1b772cu;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 21), 30928)));
    // 0x1b7730: 0x823025  or          $a2, $a0, $v0
    ctx->pc = 0x1b7730u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1b7734: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1b7734u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1b7738: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b7738u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b773c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b773cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b7740: 0x3197c  dsll32      $v1, $v1, 5
    ctx->pc = 0x1b7740u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 5));
    // 0x1b7744: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1b7744u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1b7748: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B7748u;
    SET_GPR_U32(ctx, 31, 0x1B7750u);
    ctx->pc = 0x1B774Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7748u;
    // 0x1b774c: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B7748u, 0x1B7750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7750u;
label_1b7750:
    // 0x1b7750: 0xc0705dc  jal         func_1C1770
    ctx->pc = 0x1B7750u;
    SET_GPR_U32(ctx, 31, 0x1B7758u);
    ctx->pc = 0x1B7754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7750u;
    // 0x1b7754: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1770u, 0x1B7750u, 0x1B7758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7758u;
label_1b7758:
    // 0x1b7758: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x1b7758u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b775c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b775cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7760: 0x3c02ff00  lui         $v0, 0xFF00
    ctx->pc = 0x1b7760u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65280 << 16));
    // 0x1b7764: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x1b7764u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x1b7768: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1b7768u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b776c: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1b776cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x1b7770: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1b7770u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1b7774: 0x70021389  pcpyld      $v0, $zero, $v0
    ctx->pc = 0x1b7774u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x1b7778: 0xa23025  or          $a2, $a1, $v0
    ctx->pc = 0x1b7778u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x1b777c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B777Cu;
    SET_GPR_U32(ctx, 31, 0x1B7784u);
    ctx->pc = 0x1B7780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B777Cu;
    // 0x1b7780: 0x2405004d  addiu       $a1, $zero, 0x4D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B777Cu, 0x1B7784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7784u;
label_1b7784:
    // 0x1b7784: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b7784u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7788: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x1b7788u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1b778c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B778Cu;
    SET_GPR_U32(ctx, 31, 0x1B7794u);
    ctx->pc = 0x1B7790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B778Cu;
    // 0x1b7790: 0x24060060  addiu       $a2, $zero, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B778Cu, 0x1B7794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7794u;
label_1b7794:
    // 0x1b7794: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b7794u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7798: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1b7798u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1b779c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B779Cu;
    SET_GPR_U32(ctx, 31, 0x1B77A4u);
    ctx->pc = 0x1B77A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B779Cu;
    // 0x1b77a0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B779Cu, 0x1B77A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B77A4u;
label_1b77a4:
    // 0x1b77a4: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x1b77a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x1b77a8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B77A8u;
    {
        const bool branch_taken_0x1b77a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B77ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B77A8u;
        // 0x1b77ac: 0x24030080  addiu       $v1, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b77a8) {
            ctx->pc = 0x1B77C8u;
            goto label_1b77c8;
        }
    }
    ctx->pc = 0x1B77B0u;
    // 0x1b77b0: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x1b77b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x1b77b4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1b77b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b77b8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b77b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b77bc: 0x24050043  addiu       $a1, $zero, 0x43
    ctx->pc = 0x1b77bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x1b77c0: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B77C0u;
    SET_GPR_U32(ctx, 31, 0x1B77C8u);
    ctx->pc = 0x1B77C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B77C0u;
    // 0x1b77c4: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B77C0u, 0x1B77C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B77C8u;
label_1b77c8:
    // 0x1b77c8: 0x8e830010  lw          $v1, 0x10($s4)
    ctx->pc = 0x1b77c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x1b77cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b77ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b77d0: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B77D0u;
    {
        const bool branch_taken_0x1b77d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1B77D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B77D0u;
        // 0x1b77d4: 0x24030080  addiu       $v1, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b77d0) {
            ctx->pc = 0x1B77F0u;
            goto label_1b77f0;
        }
    }
    ctx->pc = 0x1B77D8u;
    // 0x1b77d8: 0x24020048  addiu       $v0, $zero, 0x48
    ctx->pc = 0x1b77d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1b77dc: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1b77dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b77e0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b77e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b77e4: 0x24050043  addiu       $a1, $zero, 0x43
    ctx->pc = 0x1b77e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x1b77e8: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B77E8u;
    SET_GPR_U32(ctx, 31, 0x1B77F0u);
    ctx->pc = 0x1B77ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B77E8u;
    // 0x1b77ec: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B77E8u, 0x1B77F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B77F0u;
label_1b77f0:
    // 0x1b77f0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b77f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b77f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b77f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b77f8: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B77F8u;
    SET_GPR_U32(ctx, 31, 0x1B7800u);
    ctx->pc = 0x1B77FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B77F8u;
    // 0x1b77fc: 0x24060356  addiu       $a2, $zero, 0x356 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 854));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B77F8u, 0x1B7800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7800u;
label_1b7800:
    // 0x1b7800: 0x8ea678c8  lw          $a2, 0x78C8($s5)
    ctx->pc = 0x1b7800u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 30920)));
    // 0x1b7804: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b7804u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7808: 0x9ea778cc  lwu         $a3, 0x78CC($s5)
    ctx->pc = 0x1b7808u;
    SET_GPR_ZE32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 21), 30924)));
    // 0x1b780c: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1b780cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1b7810: 0x8ea278c4  lw          $v0, 0x78C4($s5)
    ctx->pc = 0x1b7810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 30916)));
    // 0x1b7814: 0x9ea378c0  lwu         $v1, 0x78C0($s5)
    ctx->pc = 0x1b7814u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 21), 30912)));
    // 0x1b7818: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1b7818u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1b781c: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x1b781cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x1b7820: 0x73938  dsll        $a3, $a3, 4
    ctx->pc = 0x1b7820u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 4);
    // 0x1b7824: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x1b7824u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x1b7828: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1b7828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1b782c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b782cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b7830: 0x34e7000a  ori         $a3, $a3, 0xA
    ctx->pc = 0x1b7830u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)10);
    // 0x1b7834: 0x633b8  dsll        $a2, $a2, 14
    ctx->pc = 0x1b7834u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 14);
    // 0x1b7838: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1b7838u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1b783c: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x1b783cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
    // 0x1b7840: 0xe63025  or          $a2, $a3, $a2
    ctx->pc = 0x1b7840u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    // 0x1b7844: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1b7844u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1b7848: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x1b7848u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
    // 0x1b784c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B784Cu;
    SET_GPR_U32(ctx, 31, 0x1B7854u);
    ctx->pc = 0x1B7850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B784Cu;
    // 0x1b7850: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B784Cu, 0x1B7854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7854u;
label_1b7854:
    // 0x1b7854: 0xc68000c8  lwc1        $f0, 0xC8($s4)
    ctx->pc = 0x1b7854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b7858: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1b7858u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x1b785c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1b785cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1b7860: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1b7860u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b7864: 0xc047b2c  jal         func_11ECB0
    ctx->pc = 0x1B7864u;
    SET_GPR_U32(ctx, 31, 0x1B786Cu);
    ctx->pc = 0x1B7868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7864u;
    // 0x1b7868: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11ECB0u, 0x1B7864u, 0x1B786Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B786Cu;
label_1b786c:
    // 0x1b786c: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x1b786cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x1b7870: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x1b7870u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
    // 0x1b7874: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1b7874u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b7878: 0x34428080  ori         $v0, $v0, 0x8080
    ctx->pc = 0x1b7878u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    // 0x1b787c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b787cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7880: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b7880u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b7884: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1b7884u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1b7888: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1b7888u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1b788c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1b788cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1b7890: 0x0  nop
    ctx->pc = 0x1b7890u;
    // NOP
    // 0x1b7894: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1b7894u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b7898: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1b7898u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1b789c: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x1b789cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
    // 0x1b78a0: 0xc070854  jal         func_1C2150
    ctx->pc = 0x1B78A0u;
    SET_GPR_U32(ctx, 31, 0x1B78A8u);
    ctx->pc = 0x1B78A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B78A0u;
    // 0x1b78a4: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2150u, 0x1B78A0u, 0x1B78A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B78A8u;
label_1b78a8:
    // 0x1b78a8: 0x8ea278c8  lw          $v0, 0x78C8($s5)
    ctx->pc = 0x1b78a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 30920)));
    // 0x1b78ac: 0x21182  srl         $v0, $v0, 6
    ctx->pc = 0x1b78acu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
    // 0x1b78b0: 0x2082b  sltu        $at, $zero, $v0
    ctx->pc = 0x1b78b0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1b78b4: 0x1020004c  beqz        $at, . + 4 + (0x4C << 2)
    ctx->pc = 0x1B78B4u;
    {
        const bool branch_taken_0x1b78b4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B78B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B78B4u;
        // 0x1b78b8: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b78b4) {
            ctx->pc = 0x1B79E8u;
            goto label_1b79e8;
        }
    }
    ctx->pc = 0x1B78BCu;
    // 0x1b78bc: 0x24027900  addiu       $v0, $zero, 0x7900
    ctx->pc = 0x1b78bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30976));
    // 0x1b78c0: 0x24037000  addiu       $v1, $zero, 0x7000
    ctx->pc = 0x1b78c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28672));
    // 0x1b78c4: 0x561023  subu        $v0, $v0, $s6
    ctx->pc = 0x1b78c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x1b78c8: 0x701823  subu        $v1, $v1, $s0
    ctx->pc = 0x1b78c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1b78cc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b78ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b78d0: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1b78d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b78d4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1b78d4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1b78d8: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x1b78d8u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x1b78dc: 0x21c38  dsll        $v1, $v0, 16
    ctx->pc = 0x1b78dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 16);
    // 0x1b78e0: 0x2412003f  addiu       $s2, $zero, 0x3F
    ctx->pc = 0x1b78e0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x1b78e4: 0x26027fff  addiu       $v0, $s0, 0x7FFF
    ctx->pc = 0x1b78e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 32767));
    // 0x1b78e8: 0x832825  or          $a1, $a0, $v1
    ctx->pc = 0x1b78e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1b78ec: 0x24421001  addiu       $v0, $v0, 0x1001
    ctx->pc = 0x1b78ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4097));
    // 0x1b78f0: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x1b78f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1b78f4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1b78f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b78f8: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1b78f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1b78fc: 0x26c27fff  addiu       $v0, $s6, 0x7FFF
    ctx->pc = 0x1b78fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 32767));
    // 0x1b7900: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1b7900u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1b7904: 0x24420701  addiu       $v0, $v0, 0x701
    ctx->pc = 0x1b7904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1793));
    // 0x1b7908: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1b7908u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b790c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b790cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b7910: 0xa48025  or          $s0, $a1, $a0
    ctx->pc = 0x1b7910u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x1b7914: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1b7914u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1b7918: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1b7918u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1b791c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1b791cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1b7920: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1b7920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1b7924: 0x64b825  or          $s7, $v1, $a0
    ctx->pc = 0x1b7924u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1b7928: 0x24420009  addiu       $v0, $v0, 0x9
    ctx->pc = 0x1b7928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9));
    // 0x1b792c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b792cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b7930: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1b7930u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1b7934: 0x21c38  dsll        $v1, $v0, 16
    ctx->pc = 0x1b7934u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 16);
    // 0x1b7938: 0xdfa200b0  ld          $v0, 0xB0($sp)
    ctx->pc = 0x1b7938u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1b793c: 0x43b025  or          $s6, $v0, $v1
    ctx->pc = 0x1b793cu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1b7940:
    // 0x1b7940: 0x12103c  dsll32      $v0, $s2, 0
    ctx->pc = 0x1b7940u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 0));
    // 0x1b7944: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1b7944u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1b7948: 0x9ea678c0  lwu         $a2, 0x78C0($s5)
    ctx->pc = 0x1b7948u;
    SET_GPR_ZE32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 21), 30912)));
    // 0x1b794c: 0x21c38  dsll        $v1, $v0, 16
    ctx->pc = 0x1b794cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 16);
    // 0x1b7950: 0x11203c  dsll32      $a0, $s1, 0
    ctx->pc = 0x1b7950u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) << (32 + 0));
    // 0x1b7954: 0x8ea278c4  lw          $v0, 0x78C4($s5)
    ctx->pc = 0x1b7954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 30916)));
    // 0x1b7958: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1b7958u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1b795c: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1b795cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1b7960: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x1b7960u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1b7964: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b7964u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7968: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x1b7968u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x1b796c: 0xc31825  or          $v1, $a2, $v1
    ctx->pc = 0x1b796cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x1b7970: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1b7970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1b7974: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b7974u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b7978: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1b7978u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1b797c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1b797cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1b7980: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B7980u;
    SET_GPR_U32(ctx, 31, 0x1B7988u);
    ctx->pc = 0x1B7984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7980u;
    // 0x1b7984: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B7980u, 0x1B7988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7988u;
label_1b7988:
    // 0x1b7988: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1b7988u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x1b798c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b798cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7990: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1b7990u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b7994: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B7994u;
    SET_GPR_U32(ctx, 31, 0x1B799Cu);
    ctx->pc = 0x1B7998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7994u;
    // 0x1b7998: 0x34460008  ori         $a2, $v0, 0x8 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B7994u, 0x1B799Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B799Cu;
label_1b799c:
    // 0x1b799c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b799cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b79a0: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1b79a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1b79a4: 0xc070854  jal         func_1C2150
    ctx->pc = 0x1B79A4u;
    SET_GPR_U32(ctx, 31, 0x1B79ACu);
    ctx->pc = 0x1B79A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B79A4u;
    // 0x1b79a8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2150u, 0x1B79A4u, 0x1B79ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B79ACu;
label_1b79ac:
    // 0x1b79ac: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b79acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b79b0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1b79b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b79b4: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B79B4u;
    SET_GPR_U32(ctx, 31, 0x1B79BCu);
    ctx->pc = 0x1B79B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B79B4u;
    // 0x1b79b8: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B79B4u, 0x1B79BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B79BCu;
label_1b79bc:
    // 0x1b79bc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b79bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b79c0: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1b79c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1b79c4: 0xc070854  jal         func_1C2150
    ctx->pc = 0x1B79C4u;
    SET_GPR_U32(ctx, 31, 0x1B79CCu);
    ctx->pc = 0x1B79C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B79C4u;
    // 0x1b79c8: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2150u, 0x1B79C4u, 0x1B79CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B79CCu;
label_1b79cc:
    // 0x1b79cc: 0x8ea278c8  lw          $v0, 0x78C8($s5)
    ctx->pc = 0x1b79ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 30920)));
    // 0x1b79d0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1b79d0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1b79d4: 0x26520040  addiu       $s2, $s2, 0x40
    ctx->pc = 0x1b79d4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    // 0x1b79d8: 0x21182  srl         $v0, $v0, 6
    ctx->pc = 0x1b79d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
    // 0x1b79dc: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x1b79dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1b79e0: 0x1440ffd7  bnez        $v0, . + 4 + (-0x29 << 2)
    ctx->pc = 0x1B79E0u;
    {
        const bool branch_taken_0x1b79e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B79E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B79E0u;
        // 0x1b79e4: 0x26310040  addiu       $s1, $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b79e0) {
            ctx->pc = 0x1B7940u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b7940;
        }
    }
    ctx->pc = 0x1B79E8u;
label_1b79e8:
    // 0x1b79e8: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x1b79e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x1b79ec: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1b79ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b79f0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b79f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b79f4: 0xc68300cc  lwc1        $f3, 0xCC($s4)
    ctx->pc = 0x1b79f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1b79f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b79f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b79fc: 0x3c024400  lui         $v0, 0x4400
    ctx->pc = 0x1b79fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17408 << 16));
    // 0x1b7a00: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1b7a00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b7a04: 0xc68400ac  lwc1        $f4, 0xAC($s4)
    ctx->pc = 0x1b7a04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1b7a08: 0x3c024360  lui         $v0, 0x4360
    ctx->pc = 0x1b7a08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17248 << 16));
    // 0x1b7a0c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b7a0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b7a10: 0x0  nop
    ctx->pc = 0x1b7a10u;
    // NOP
    // 0x1b7a14: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x1b7a14u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x1b7a18: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x1b7a18u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x1b7a1c: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x1b7a1cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x1b7a20: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1b7a20u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1b7a24: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x1b7a24u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x1b7a28: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x1b7a28u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x1b7a2c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1b7a2cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1b7a30: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1b7a30u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1b7a34: 0x44110800  mfc1        $s1, $f1
    ctx->pc = 0x1b7a34u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 17, bits); }
    // 0x1b7a38: 0x44100000  mfc1        $s0, $f0
    ctx->pc = 0x1b7a38u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
    // 0x1b7a3c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B7A3Cu;
    SET_GPR_U32(ctx, 31, 0x1B7A44u);
    ctx->pc = 0x1B7A40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7A3Cu;
    // 0x1b7a40: 0x24060356  addiu       $a2, $zero, 0x356 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 854));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B7A3Cu, 0x1B7A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7A44u;
label_1b7a44:
    // 0x1b7a44: 0x8ea678c8  lw          $a2, 0x78C8($s5)
    ctx->pc = 0x1b7a44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 30920)));
    // 0x1b7a48: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b7a48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7a4c: 0x9ea778cc  lwu         $a3, 0x78CC($s5)
    ctx->pc = 0x1b7a4cu;
    SET_GPR_ZE32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 21), 30924)));
    // 0x1b7a50: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1b7a50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1b7a54: 0x8ea278c4  lw          $v0, 0x78C4($s5)
    ctx->pc = 0x1b7a54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 30916)));
    // 0x1b7a58: 0x9ea378c0  lwu         $v1, 0x78C0($s5)
    ctx->pc = 0x1b7a58u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 21), 30912)));
    // 0x1b7a5c: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1b7a5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1b7a60: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x1b7a60u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x1b7a64: 0x73938  dsll        $a3, $a3, 4
    ctx->pc = 0x1b7a64u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 4);
    // 0x1b7a68: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x1b7a68u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x1b7a6c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1b7a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1b7a70: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b7a70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b7a74: 0x34e7000a  ori         $a3, $a3, 0xA
    ctx->pc = 0x1b7a74u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)10);
    // 0x1b7a78: 0x633b8  dsll        $a2, $a2, 14
    ctx->pc = 0x1b7a78u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 14);
    // 0x1b7a7c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1b7a7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1b7a80: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x1b7a80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
    // 0x1b7a84: 0xe63025  or          $a2, $a3, $a2
    ctx->pc = 0x1b7a84u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    // 0x1b7a88: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1b7a88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1b7a8c: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x1b7a8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
    // 0x1b7a90: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B7A90u;
    SET_GPR_U32(ctx, 31, 0x1B7A98u);
    ctx->pc = 0x1B7A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7A90u;
    // 0x1b7a94: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B7A90u, 0x1B7A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7A98u;
label_1b7a98:
    // 0x1b7a98: 0xc68000cc  lwc1        $f0, 0xCC($s4)
    ctx->pc = 0x1b7a98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b7a9c: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1b7a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x1b7aa0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1b7aa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1b7aa4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1b7aa4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b7aa8: 0xc047b2c  jal         func_11ECB0
    ctx->pc = 0x1B7AA8u;
    SET_GPR_U32(ctx, 31, 0x1B7AB0u);
    ctx->pc = 0x1B7AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7AA8u;
    // 0x1b7aac: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11ECB0u, 0x1B7AA8u, 0x1B7AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7AB0u;
label_1b7ab0:
    // 0x1b7ab0: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x1b7ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x1b7ab4: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x1b7ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
    // 0x1b7ab8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1b7ab8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b7abc: 0x34428080  ori         $v0, $v0, 0x8080
    ctx->pc = 0x1b7abcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    // 0x1b7ac0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b7ac0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7ac4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b7ac4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b7ac8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1b7ac8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1b7acc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1b7accu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1b7ad0: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1b7ad0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1b7ad4: 0x0  nop
    ctx->pc = 0x1b7ad4u;
    // NOP
    // 0x1b7ad8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1b7ad8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b7adc: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1b7adcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1b7ae0: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x1b7ae0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
    // 0x1b7ae4: 0xc070854  jal         func_1C2150
    ctx->pc = 0x1B7AE4u;
    SET_GPR_U32(ctx, 31, 0x1B7AECu);
    ctx->pc = 0x1B7AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7AE4u;
    // 0x1b7ae8: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2150u, 0x1B7AE4u, 0x1B7AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7AECu;
label_1b7aec:
    // 0x1b7aec: 0x8ea378c8  lw          $v1, 0x78C8($s5)
    ctx->pc = 0x1b7aecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 30920)));
    // 0x1b7af0: 0x31982  srl         $v1, $v1, 6
    ctx->pc = 0x1b7af0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 6));
    // 0x1b7af4: 0x3082b  sltu        $at, $zero, $v1
    ctx->pc = 0x1b7af4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1b7af8: 0x10200051  beqz        $at, . + 4 + (0x51 << 2)
    ctx->pc = 0x1B7AF8u;
    {
        const bool branch_taken_0x1b7af8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7AF8u;
        // 0x1b7afc: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7af8) {
            ctx->pc = 0x1B7C40u;
            goto label_1b7c40;
        }
    }
    ctx->pc = 0x1B7B00u;
    // 0x1b7b00: 0x24027900  addiu       $v0, $zero, 0x7900
    ctx->pc = 0x1b7b00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30976));
    // 0x1b7b04: 0x24037000  addiu       $v1, $zero, 0x7000
    ctx->pc = 0x1b7b04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28672));
    // 0x1b7b08: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x1b7b08u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1b7b0c: 0x711823  subu        $v1, $v1, $s1
    ctx->pc = 0x1b7b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1b7b10: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b7b10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b7b14: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1b7b14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b7b18: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1b7b18u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1b7b1c: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x1b7b1cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x1b7b20: 0x21c38  dsll        $v1, $v0, 16
    ctx->pc = 0x1b7b20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 16);
    // 0x1b7b24: 0x2413003f  addiu       $s3, $zero, 0x3F
    ctx->pc = 0x1b7b24u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x1b7b28: 0x26227fff  addiu       $v0, $s1, 0x7FFF
    ctx->pc = 0x1b7b28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 32767));
    // 0x1b7b2c: 0x832825  or          $a1, $a0, $v1
    ctx->pc = 0x1b7b2cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1b7b30: 0x24421001  addiu       $v0, $v0, 0x1001
    ctx->pc = 0x1b7b30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4097));
    // 0x1b7b34: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x1b7b34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1b7b38: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1b7b38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b7b3c: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1b7b3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1b7b40: 0x26027fff  addiu       $v0, $s0, 0x7FFF
    ctx->pc = 0x1b7b40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 32767));
    // 0x1b7b44: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1b7b44u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1b7b48: 0x24420701  addiu       $v0, $v0, 0x701
    ctx->pc = 0x1b7b48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1793));
    // 0x1b7b4c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1b7b4cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7b50: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b7b50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b7b54: 0xa48025  or          $s0, $a1, $a0
    ctx->pc = 0x1b7b54u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x1b7b58: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1b7b58u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1b7b5c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1b7b5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1b7b60: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1b7b60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1b7b64: 0x448825  or          $s1, $v0, $a0
    ctx->pc = 0x1b7b64u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1b7b68: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x1b7b68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x1b7b6c: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1b7b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1b7b70: 0x34630009  ori         $v1, $v1, 0x9
    ctx->pc = 0x1b7b70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)9);
    // 0x1b7b74: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b7b74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b7b78: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1b7b78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b7b7c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1b7b7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1b7b80: 0x31438  dsll        $v0, $v1, 16
    ctx->pc = 0x1b7b80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << 16);
    // 0x1b7b84: 0x62b025  or          $s6, $v1, $v0
    ctx->pc = 0x1b7b84u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1b7b88:
    // 0x1b7b88: 0x13103c  dsll32      $v0, $s3, 0
    ctx->pc = 0x1b7b88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) << (32 + 0));
    // 0x1b7b8c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1b7b8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1b7b90: 0x9ea678c0  lwu         $a2, 0x78C0($s5)
    ctx->pc = 0x1b7b90u;
    SET_GPR_ZE32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 21), 30912)));
    // 0x1b7b94: 0x21c38  dsll        $v1, $v0, 16
    ctx->pc = 0x1b7b94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 16);
    // 0x1b7b98: 0x12203c  dsll32      $a0, $s2, 0
    ctx->pc = 0x1b7b98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) << (32 + 0));
    // 0x1b7b9c: 0x8ea278c4  lw          $v0, 0x78C4($s5)
    ctx->pc = 0x1b7b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 30916)));
    // 0x1b7ba0: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1b7ba0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1b7ba4: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1b7ba4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1b7ba8: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x1b7ba8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1b7bac: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b7bacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7bb0: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x1b7bb0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x1b7bb4: 0xc31825  or          $v1, $a2, $v1
    ctx->pc = 0x1b7bb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x1b7bb8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1b7bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1b7bbc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b7bbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b7bc0: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1b7bc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1b7bc4: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1b7bc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1b7bc8: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B7BC8u;
    SET_GPR_U32(ctx, 31, 0x1B7BD0u);
    ctx->pc = 0x1B7BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7BC8u;
    // 0x1b7bcc: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B7BC8u, 0x1B7BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7BD0u;
label_1b7bd0:
    // 0x1b7bd0: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x1b7bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1b7bd4: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1b7bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1b7bd8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1b7bd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b7bdc: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x1b7bdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x1b7be0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b7be0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7be4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1b7be4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b7be8: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B7BE8u;
    SET_GPR_U32(ctx, 31, 0x1B7BF0u);
    ctx->pc = 0x1B7BECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7BE8u;
    // 0x1b7bec: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B7BE8u, 0x1B7BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7BF0u;
label_1b7bf0:
    // 0x1b7bf0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b7bf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7bf4: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1b7bf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1b7bf8: 0xc070854  jal         func_1C2150
    ctx->pc = 0x1B7BF8u;
    SET_GPR_U32(ctx, 31, 0x1B7C00u);
    ctx->pc = 0x1B7BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7BF8u;
    // 0x1b7bfc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2150u, 0x1B7BF8u, 0x1B7C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7C00u;
label_1b7c00:
    // 0x1b7c00: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b7c00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7c04: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1b7c04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b7c08: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B7C08u;
    SET_GPR_U32(ctx, 31, 0x1B7C10u);
    ctx->pc = 0x1B7C0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7C08u;
    // 0x1b7c0c: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B7C08u, 0x1B7C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7C10u;
label_1b7c10:
    // 0x1b7c10: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b7c10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7c14: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1b7c14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1b7c18: 0xc070854  jal         func_1C2150
    ctx->pc = 0x1B7C18u;
    SET_GPR_U32(ctx, 31, 0x1B7C20u);
    ctx->pc = 0x1B7C1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7C18u;
    // 0x1b7c1c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2150u, 0x1B7C18u, 0x1B7C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7C20u;
label_1b7c20:
    // 0x1b7c20: 0x8ea378c8  lw          $v1, 0x78C8($s5)
    ctx->pc = 0x1b7c20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 30920)));
    // 0x1b7c24: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1b7c24u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1b7c28: 0x26730040  addiu       $s3, $s3, 0x40
    ctx->pc = 0x1b7c28u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
    // 0x1b7c2c: 0x31982  srl         $v1, $v1, 6
    ctx->pc = 0x1b7c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 6));
    // 0x1b7c30: 0x283182b  sltu        $v1, $s4, $v1
    ctx->pc = 0x1b7c30u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1b7c34: 0x1460ffd4  bnez        $v1, . + 4 + (-0x2C << 2)
    ctx->pc = 0x1B7C34u;
    {
        const bool branch_taken_0x1b7c34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B7C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7C34u;
        // 0x1b7c38: 0x26520040  addiu       $s2, $s2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7c34) {
            ctx->pc = 0x1B7B88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b7b88;
        }
    }
    ctx->pc = 0x1B7C3Cu;
    // 0x1b7c3c: 0x0  nop
    ctx->pc = 0x1b7c3cu;
    // NOP
label_1b7c40:
    // 0x1b7c40: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x1b7c40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1b7c44: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x1b7c44u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1b7c48: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x1b7c48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x1b7c4c: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x1b7c4cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1b7c50: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x1b7c50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1b7c54: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x1b7c54u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b7c58: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x1b7c58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1b7c5c: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x1b7c5cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1b7c60: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1b7c60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1b7c64: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1b7c64u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b7c68: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1b7c68u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b7c6c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1b7c6cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b7c70: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1b7c70u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b7c74: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1b7c74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b7c78: 0x3e00008  jr          $ra
    ctx->pc = 0x1B7C78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B7C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7C78u;
        // 0x1b7c7c: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B7C78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B7C80u;
}
