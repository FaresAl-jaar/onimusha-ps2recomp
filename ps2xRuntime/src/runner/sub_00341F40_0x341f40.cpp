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

// Function: sub_00341F40
// Address: 0x341f40 - 0x342144
void sub_00341F40_0x341f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00341F40_0x341f40");
#endif

    switch (ctx->pc) {
        case 0x341fb8u: goto label_341fb8;
        case 0x342010u: goto label_342010;
        case 0x34201cu: goto label_34201c;
        case 0x34202cu: goto label_34202c;
        case 0x342124u: goto label_342124;
        default: break;
    }

    ctx->pc = 0x341f40u;

    // 0x341f40: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x341f40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x341f44: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x341f44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x341f48: 0x27a30090  addiu       $v1, $sp, 0x90
    ctx->pc = 0x341f48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x341f4c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x341f4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x341f50: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x341f50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x341f54: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x341f54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x341f58: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x341f58u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x341f5c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x341f5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x341f60: 0x120902d  daddu       $s2, $t1, $zero
    ctx->pc = 0x341f60u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x341f64: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x341f64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x341f68: 0x140882d  daddu       $s1, $t2, $zero
    ctx->pc = 0x341f68u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x341f6c: 0xc4e30000  lwc1        $f3, 0x0($a3)
    ctx->pc = 0x341f6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x341f70: 0x160802d  daddu       $s0, $t3, $zero
    ctx->pc = 0x341f70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x341f74: 0xc4e20004  lwc1        $f2, 0x4($a3)
    ctx->pc = 0x341f74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x341f78: 0xc4e10008  lwc1        $f1, 0x8($a3)
    ctx->pc = 0x341f78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x341f7c: 0xc4e0000c  lwc1        $f0, 0xC($a3)
    ctx->pc = 0x341f7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x341f80: 0xe4630000  swc1        $f3, 0x0($v1)
    ctx->pc = 0x341f80u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x341f84: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x341f84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x341f88: 0xe4620004  swc1        $f2, 0x4($v1)
    ctx->pc = 0x341f88u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x341f8c: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x341f8cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x341f90: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x341f90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x341f94: 0xc5030000  lwc1        $f3, 0x0($t0)
    ctx->pc = 0x341f94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x341f98: 0xc5020004  lwc1        $f2, 0x4($t0)
    ctx->pc = 0x341f98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x341f9c: 0xc5010008  lwc1        $f1, 0x8($t0)
    ctx->pc = 0x341f9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x341fa0: 0xc500000c  lwc1        $f0, 0xC($t0)
    ctx->pc = 0x341fa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x341fa4: 0xe4430000  swc1        $f3, 0x0($v0)
    ctx->pc = 0x341fa4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x341fa8: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x341fa8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x341fac: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x341facu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x341fb0: 0xc0d0714  jal         func_341C50
    ctx->pc = 0x341FB0u;
    SET_GPR_U32(ctx, 31, 0x341FB8u);
    ctx->pc = 0x341FB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x341FB0u;
    // 0x341fb4: 0xe440000c  swc1        $f0, 0xC($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x341C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341C50u, 0x341FB0u, 0x341FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x341FB8u;
label_341fb8:
    // 0x341fb8: 0x27a30090  addiu       $v1, $sp, 0x90
    ctx->pc = 0x341fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x341fbc: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x341fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x341fc0: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x341fc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x341fc4: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x341fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x341fc8: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x341fc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x341fcc: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x341fccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x341fd0: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x341fd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x341fd4: 0xe6630010  swc1        $f3, 0x10($s3)
    ctx->pc = 0x341fd4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 16), bits); }
    // 0x341fd8: 0xe6620014  swc1        $f2, 0x14($s3)
    ctx->pc = 0x341fd8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 20), bits); }
    // 0x341fdc: 0xe6610018  swc1        $f1, 0x18($s3)
    ctx->pc = 0x341fdcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 24), bits); }
    // 0x341fe0: 0xe660001c  swc1        $f0, 0x1C($s3)
    ctx->pc = 0x341fe0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 28), bits); }
    // 0x341fe4: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x341fe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x341fe8: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x341fe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x341fec: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x341fecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x341ff0: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x341ff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x341ff4: 0xe6630020  swc1        $f3, 0x20($s3)
    ctx->pc = 0x341ff4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 32), bits); }
    // 0x341ff8: 0xe6620024  swc1        $f2, 0x24($s3)
    ctx->pc = 0x341ff8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 36), bits); }
    // 0x341ffc: 0xe6610028  swc1        $f1, 0x28($s3)
    ctx->pc = 0x341ffcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 40), bits); }
    // 0x342000: 0xe660002c  swc1        $f0, 0x2C($s3)
    ctx->pc = 0x342000u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 44), bits); }
    // 0x342004: 0x8e650030  lw          $a1, 0x30($s3)
    ctx->pc = 0x342004u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x342008: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x342008u;
    SET_GPR_U32(ctx, 31, 0x342010u);
    ctx->pc = 0x34200Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342008u;
    // 0x34200c: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x342008u, 0x342010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342010u;
label_342010:
    // 0x342010: 0x8c45004c  lw          $a1, 0x4C($v0)
    ctx->pc = 0x342010u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x342014: 0xc0d1714  jal         func_345C50
    ctx->pc = 0x342014u;
    SET_GPR_U32(ctx, 31, 0x34201Cu);
    ctx->pc = 0x342018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342014u;
    // 0x342018: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x345C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x345C50u, 0x342014u, 0x34201Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34201Cu;
label_34201c:
    // 0x34201c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x34201cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x342020: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x342020u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x342024: 0xc0414d0  jal         func_105340
    ctx->pc = 0x342024u;
    SET_GPR_U32(ctx, 31, 0x34202Cu);
    ctx->pc = 0x342028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342024u;
    // 0x342028: 0x27a60070  addiu       $a2, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x342024u, 0x34202Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34202Cu;
label_34202c:
    // 0x34202c: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x34202cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x342030: 0x27a30060  addiu       $v1, $sp, 0x60
    ctx->pc = 0x342030u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x342034: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x342034u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x342038: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x342038u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x34203c: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x34203cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x342040: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x342040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x342044: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x342044u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x342048: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x342048u;
    {
        const bool branch_taken_0x342048 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x342048) {
            ctx->pc = 0x342068u;
            goto label_342068;
        }
    }
    ctx->pc = 0x342050u;
    // 0x342050: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x342050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x342054: 0x3c024580  lui         $v0, 0x4580
    ctx->pc = 0x342054u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17792 << 16));
    // 0x342058: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x342058u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x34205c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x34205Cu;
    {
        const bool branch_taken_0x34205c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x342060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34205Cu;
        // 0x342060: 0x46000880  add.s       $f2, $f1, $f0 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34205c) {
            ctx->pc = 0x3420A8u;
            goto label_3420a8;
        }
    }
    ctx->pc = 0x342064u;
    // 0x342064: 0x0  nop
    ctx->pc = 0x342064u;
    // NOP
label_342068:
    // 0x342068: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x342068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34206c: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x34206cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x342070: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x342070u;
    {
        const bool branch_taken_0x342070 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x342070) {
            ctx->pc = 0x342090u;
            goto label_342090;
        }
    }
    ctx->pc = 0x342078u;
    // 0x342078: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x342078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34207c: 0x3c024580  lui         $v0, 0x4580
    ctx->pc = 0x34207cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17792 << 16));
    // 0x342080: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x342080u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x342084: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x342084u;
    {
        const bool branch_taken_0x342084 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x342088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342084u;
        // 0x342088: 0x46000880  add.s       $f2, $f1, $f0 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x342084) {
            ctx->pc = 0x3420A8u;
            goto label_3420a8;
        }
    }
    ctx->pc = 0x34208Cu;
    // 0x34208c: 0x0  nop
    ctx->pc = 0x34208cu;
    // NOP
label_342090:
    // 0x342090: 0x3c024580  lui         $v0, 0x4580
    ctx->pc = 0x342090u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17792 << 16));
    // 0x342094: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x342094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x342098: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x342098u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x34209c: 0x0  nop
    ctx->pc = 0x34209cu;
    // NOP
    // 0x3420a0: 0x46000880  add.s       $f2, $f1, $f0
    ctx->pc = 0x3420a0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3420a4: 0x0  nop
    ctx->pc = 0x3420a4u;
    // NOP
label_3420a8:
    // 0x3420a8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3420a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3420ac: 0x0  nop
    ctx->pc = 0x3420acu;
    // NOP
    // 0x3420b0: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x3420b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3420b4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x3420B4u;
    {
        const bool branch_taken_0x3420b4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3420b4) {
            ctx->pc = 0x3420C0u;
            goto label_3420c0;
        }
    }
    ctx->pc = 0x3420BCu;
    // 0x3420bc: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x3420bcu;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
label_3420c0:
    // 0x3420c0: 0x101300  sll         $v0, $s0, 12
    ctx->pc = 0x3420c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 12));
    // 0x3420c4: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x3420c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x3420c8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3420c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3420cc: 0x26640038  addiu       $a0, $s3, 0x38
    ctx->pc = 0x3420ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 56));
    // 0x3420d0: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x3420d0u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3420d4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3420d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3420d8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3420d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3420dc: 0x2311018  mult        $v0, $s1, $s1
    ctx->pc = 0x3420dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3420e0: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x3420e0u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[1], ctx->f[2]));
    // 0x3420e4: 0x44910800  mtc1        $s1, $f1
    ctx->pc = 0x3420e4u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3420e8: 0x0  nop
    ctx->pc = 0x3420e8u;
    // NOP
    // 0x3420ec: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x3420ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x3420f0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3420f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3420f4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3420f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3420f8: 0x0  nop
    ctx->pc = 0x3420f8u;
    // NOP
    // 0x3420fc: 0x4601105d  msub.s      $f1, $f2, $f1
    ctx->pc = 0x3420fcu;
    ctx->f[1] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[1]));
    // 0x342100: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x342100u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x342104: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x342104u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x342108: 0x0  nop
    ctx->pc = 0x342108u;
    // NOP
    // 0x34210c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x34210cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x342110: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x342110u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x342114: 0x0  nop
    ctx->pc = 0x342114u;
    // NOP
    // 0x342118: 0xe6600044  swc1        $f0, 0x44($s3)
    ctx->pc = 0x342118u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 68), bits); }
    // 0x34211c: 0xc0d0ae8  jal         func_342BA0
    ctx->pc = 0x34211Cu;
    SET_GPR_U32(ctx, 31, 0x342124u);
    ctx->pc = 0x342120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34211Cu;
    // 0x342120: 0xe6620040  swc1        $f2, 0x40($s3) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 64), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x342BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342BA0u, 0x34211Cu, 0x342124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342124u;
label_342124:
    // 0x342124: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x342124u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x342128: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x342128u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34212c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x34212cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x342130: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x342130u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x342134: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x342134u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x342138: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x342138u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34213c: 0x3e00008  jr          $ra
    ctx->pc = 0x34213Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x342140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34213Cu;
        // 0x342140: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34213Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x342144u;
}
