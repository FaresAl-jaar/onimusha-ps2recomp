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

// Function: sub_00185C10
// Address: 0x185c10 - 0x186170
void sub_00185C10_0x185c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00185C10_0x185c10");
#endif

    switch (ctx->pc) {
        case 0x185c58u: goto label_185c58;
        case 0x185c68u: goto label_185c68;
        case 0x185c80u: goto label_185c80;
        case 0x185c90u: goto label_185c90;
        case 0x185c98u: goto label_185c98;
        case 0x185d58u: goto label_185d58;
        case 0x185d68u: goto label_185d68;
        case 0x185dd4u: goto label_185dd4;
        case 0x185de4u: goto label_185de4;
        case 0x185df0u: goto label_185df0;
        case 0x185dfcu: goto label_185dfc;
        case 0x185e08u: goto label_185e08;
        case 0x185e20u: goto label_185e20;
        case 0x185e30u: goto label_185e30;
        case 0x185e40u: goto label_185e40;
        case 0x185e58u: goto label_185e58;
        case 0x185e68u: goto label_185e68;
        case 0x185e74u: goto label_185e74;
        case 0x185e80u: goto label_185e80;
        case 0x185e8cu: goto label_185e8c;
        case 0x185ea8u: goto label_185ea8;
        case 0x185eb8u: goto label_185eb8;
        case 0x185ec8u: goto label_185ec8;
        case 0x185eecu: goto label_185eec;
        case 0x185efcu: goto label_185efc;
        case 0x185f0cu: goto label_185f0c;
        case 0x185f24u: goto label_185f24;
        case 0x185f3cu: goto label_185f3c;
        case 0x185f9cu: goto label_185f9c;
        case 0x185fb4u: goto label_185fb4;
        case 0x185fc0u: goto label_185fc0;
        case 0x185fd8u: goto label_185fd8;
        case 0x18602cu: goto label_18602c;
        case 0x186038u: goto label_186038;
        case 0x186050u: goto label_186050;
        case 0x186064u: goto label_186064;
        case 0x18607cu: goto label_18607c;
        case 0x186088u: goto label_186088;
        case 0x1860a0u: goto label_1860a0;
        case 0x1860b8u: goto label_1860b8;
        case 0x1860d0u: goto label_1860d0;
        case 0x1860e0u: goto label_1860e0;
        case 0x186104u: goto label_186104;
        case 0x186114u: goto label_186114;
        case 0x18612cu: goto label_18612c;
        case 0x186138u: goto label_186138;
        case 0x186150u: goto label_186150;
        default: break;
    }

    ctx->pc = 0x185c10u;

    // 0x185c10: 0x27bdfe00  addiu       $sp, $sp, -0x200
    ctx->pc = 0x185c10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966784));
    // 0x185c14: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x185c14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x185c18: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x185c18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x185c1c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x185c1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x185c20: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x185c20u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185c24: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x185c24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x185c28: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x185c28u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185c2c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x185c2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x185c30: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x185c30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x185c34: 0x8ca20060  lw          $v0, 0x60($a1)
    ctx->pc = 0x185c34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 96)));
    // 0x185c38: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x185c38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185c3c: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x185c3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x185c40: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x185C40u;
    {
        const bool branch_taken_0x185c40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x185C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185C40u;
        // 0x185c44: 0x26110040  addiu       $s1, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185c40) {
            ctx->pc = 0x185C70u;
            goto label_185c70;
        }
    }
    ctx->pc = 0x185C48u;
    // 0x185c48: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x185c48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x185c4c: 0x26250030  addiu       $a1, $s1, 0x30
    ctx->pc = 0x185c4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x185c50: 0xc0414d0  jal         func_105340
    ctx->pc = 0x185C50u;
    SET_GPR_U32(ctx, 31, 0x185C58u);
    ctx->pc = 0x185C54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185C50u;
    // 0x185c54: 0x26260080  addiu       $a2, $s1, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x185C50u, 0x185C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185C58u;
label_185c58:
    // 0x185c58: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x185c58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x185c5c: 0x26250080  addiu       $a1, $s1, 0x80
    ctx->pc = 0x185c5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    // 0x185c60: 0xc0414d0  jal         func_105340
    ctx->pc = 0x185C60u;
    SET_GPR_U32(ctx, 31, 0x185C68u);
    ctx->pc = 0x185C64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185C60u;
    // 0x185c64: 0x26260090  addiu       $a2, $s1, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x185C60u, 0x185C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185C68u;
label_185c68:
    // 0x185c68: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x185C68u;
    {
        const bool branch_taken_0x185c68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x185c68) {
            ctx->pc = 0x185C90u;
            goto label_185c90;
        }
    }
    ctx->pc = 0x185C70u;
label_185c70:
    // 0x185c70: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x185c70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x185c74: 0x26250080  addiu       $a1, $s1, 0x80
    ctx->pc = 0x185c74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    // 0x185c78: 0xc0414d0  jal         func_105340
    ctx->pc = 0x185C78u;
    SET_GPR_U32(ctx, 31, 0x185C80u);
    ctx->pc = 0x185C7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185C78u;
    // 0x185c7c: 0x26260030  addiu       $a2, $s1, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x185C78u, 0x185C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185C80u;
label_185c80:
    // 0x185c80: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x185c80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x185c84: 0x26250080  addiu       $a1, $s1, 0x80
    ctx->pc = 0x185c84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    // 0x185c88: 0xc0414d0  jal         func_105340
    ctx->pc = 0x185C88u;
    SET_GPR_U32(ctx, 31, 0x185C90u);
    ctx->pc = 0x185C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185C88u;
    // 0x185c8c: 0x26260090  addiu       $a2, $s1, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x185C88u, 0x185C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185C90u;
label_185c90:
    // 0x185c90: 0xc04d7b4  jal         func_135ED0
    ctx->pc = 0x185C90u;
    SET_GPR_U32(ctx, 31, 0x185C98u);
    ctx->pc = 0x185C94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185C90u;
    // 0x185c94: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135ED0u, 0x185C90u, 0x185C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185C98u;
label_185c98:
    // 0x185c98: 0xc6810040  lwc1        $f1, 0x40($s4)
    ctx->pc = 0x185c98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x185c9c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x185c9cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x185ca0: 0x45000041  bc1f        . + 4 + (0x41 << 2)
    ctx->pc = 0x185CA0u;
    {
        const bool branch_taken_0x185ca0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x185ca0) {
            ctx->pc = 0x185DA8u;
            goto label_185da8;
        }
    }
    ctx->pc = 0x185CA8u;
    // 0x185ca8: 0xc6820048  lwc1        $f2, 0x48($s4)
    ctx->pc = 0x185ca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x185cac: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x185cacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x185cb0: 0x46000102  mul.s       $f4, $f0, $f0
    ctx->pc = 0x185cb0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x185cb4: 0xc6830044  lwc1        $f3, 0x44($s4)
    ctx->pc = 0x185cb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x185cb8: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x185cb8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x185cbc: 0x460418c0  add.s       $f3, $f3, $f4
    ctx->pc = 0x185cbcu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x185cc0: 0x46001803  div.s       $f0, $f3, $f0
    ctx->pc = 0x185cc0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[3], ctx->f[0]); }
    // 0x185cc4: 0xe7a001f8  swc1        $f0, 0x1F8($sp)
    ctx->pc = 0x185cc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 504), bits); }
    // 0x185cc8: 0xc683004c  lwc1        $f3, 0x4C($s4)
    ctx->pc = 0x185cc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x185ccc: 0xc6820050  lwc1        $f2, 0x50($s4)
    ctx->pc = 0x185cccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x185cd0: 0xc7a001f8  lwc1        $f0, 0x1F8($sp)
    ctx->pc = 0x185cd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x185cd4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x185cd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x185cd8: 0x460418c1  sub.s       $f3, $f3, $f4
    ctx->pc = 0x185cd8u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[4]);
    // 0x185cdc: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x185cdcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x185ce0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x185ce0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x185ce4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x185CE4u;
    {
        const bool branch_taken_0x185ce4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x185CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185CE4u;
        // 0x185ce8: 0xe7a201fc  swc1        $f2, 0x1FC($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 508), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x185ce4) {
            ctx->pc = 0x185CF0u;
            goto label_185cf0;
        }
    }
    ctx->pc = 0x185CECu;
    // 0x185cec: 0xe7a101f8  swc1        $f1, 0x1F8($sp)
    ctx->pc = 0x185cecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 504), bits); }
label_185cf0:
    // 0x185cf0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x185cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x185cf4: 0xc7a101f8  lwc1        $f1, 0x1F8($sp)
    ctx->pc = 0x185cf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x185cf8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x185cf8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x185cfc: 0x0  nop
    ctx->pc = 0x185cfcu;
    // NOP
    // 0x185d00: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x185d00u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x185d04: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x185D04u;
    {
        const bool branch_taken_0x185d04 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x185d04) {
            ctx->pc = 0x185D10u;
            goto label_185d10;
        }
    }
    ctx->pc = 0x185D0Cu;
    // 0x185d0c: 0xe7a001f8  swc1        $f0, 0x1F8($sp)
    ctx->pc = 0x185d0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 504), bits); }
label_185d10:
    // 0x185d10: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x185d10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x185d14: 0xc7a101fc  lwc1        $f1, 0x1FC($sp)
    ctx->pc = 0x185d14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 508)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x185d18: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x185d18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x185d1c: 0x0  nop
    ctx->pc = 0x185d1cu;
    // NOP
    // 0x185d20: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x185d20u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x185d24: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x185D24u;
    {
        const bool branch_taken_0x185d24 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x185d24) {
            ctx->pc = 0x185D30u;
            goto label_185d30;
        }
    }
    ctx->pc = 0x185D2Cu;
    // 0x185d2c: 0xe7a001fc  swc1        $f0, 0x1FC($sp)
    ctx->pc = 0x185d2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 508), bits); }
label_185d30:
    // 0x185d30: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x185d30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x185d34: 0xc7a101fc  lwc1        $f1, 0x1FC($sp)
    ctx->pc = 0x185d34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 508)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x185d38: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x185d38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x185d3c: 0x0  nop
    ctx->pc = 0x185d3cu;
    // NOP
    // 0x185d40: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x185d40u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x185d44: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x185D44u;
    {
        const bool branch_taken_0x185d44 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x185d44) {
            ctx->pc = 0x185D50u;
            goto label_185d50;
        }
    }
    ctx->pc = 0x185D4Cu;
    // 0x185d4c: 0xe7a001fc  swc1        $f0, 0x1FC($sp)
    ctx->pc = 0x185d4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 508), bits); }
label_185d50:
    // 0x185d50: 0xc047b7c  jal         func_11EDF0
    ctx->pc = 0x185D50u;
    SET_GPR_U32(ctx, 31, 0x185D58u);
    ctx->pc = 0x185D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185D50u;
    // 0x185d54: 0xc7ac01f8  lwc1        $f12, 0x1F8($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EDF0u, 0x185D50u, 0x185D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185D58u;
label_185d58:
    // 0x185d58: 0xc7ac01fc  lwc1        $f12, 0x1FC($sp)
    ctx->pc = 0x185d58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 508)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x185d5c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x185d5cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x185d60: 0xc047b7c  jal         func_11EDF0
    ctx->pc = 0x185D60u;
    SET_GPR_U32(ctx, 31, 0x185D68u);
    ctx->pc = 0x185D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185D60u;
    // 0x185d64: 0xe7a001f8  swc1        $f0, 0x1F8($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 504), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EDF0u, 0x185D60u, 0x185D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185D68u;
label_185d68:
    // 0x185d68: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x185d68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x185d6c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x185d6cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185d70: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x185d70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x185d74: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x185d74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x185d78: 0xc7a201f8  lwc1        $f2, 0x1F8($sp)
    ctx->pc = 0x185d78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x185d7c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x185d7cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x185d80: 0xe7a001fc  swc1        $f0, 0x1FC($sp)
    ctx->pc = 0x185d80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 508), bits); }
    // 0x185d84: 0xc6800054  lwc1        $f0, 0x54($s4)
    ctx->pc = 0x185d84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x185d88: 0xc7a101fc  lwc1        $f1, 0x1FC($sp)
    ctx->pc = 0x185d88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 508)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x185d8c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x185d8cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x185d90: 0xe7a001f8  swc1        $f0, 0x1F8($sp)
    ctx->pc = 0x185d90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 504), bits); }
    // 0x185d94: 0xc6800058  lwc1        $f0, 0x58($s4)
    ctx->pc = 0x185d94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x185d98: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x185d98u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x185d9c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x185D9Cu;
    {
        const bool branch_taken_0x185d9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185D9Cu;
        // 0x185da0: 0xe7a001fc  swc1        $f0, 0x1FC($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 508), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x185d9c) {
            ctx->pc = 0x185DB8u;
            goto label_185db8;
        }
    }
    ctx->pc = 0x185DA4u;
    // 0x185da4: 0x0  nop
    ctx->pc = 0x185da4u;
    // NOP
label_185da8:
    // 0x185da8: 0xafa001f8  sw          $zero, 0x1F8($sp)
    ctx->pc = 0x185da8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 504), GPR_U32(ctx, 0));
    // 0x185dac: 0xafa001fc  sw          $zero, 0x1FC($sp)
    ctx->pc = 0x185dacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 508), GPR_U32(ctx, 0));
    // 0x185db0: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x185db0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x185db4: 0x0  nop
    ctx->pc = 0x185db4u;
    // NOP
label_185db8:
    // 0x185db8: 0x8e820060  lw          $v0, 0x60($s4)
    ctx->pc = 0x185db8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 96)));
    // 0x185dbc: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x185dbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x185dc0: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x185DC0u;
    {
        const bool branch_taken_0x185dc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x185DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185DC0u;
        // 0x185dc4: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185dc0) {
            ctx->pc = 0x185E48u;
            goto label_185e48;
        }
    }
    ctx->pc = 0x185DC8u;
    // 0x185dc8: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x185dc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x185dcc: 0xc041460  jal         func_105180
    ctx->pc = 0x185DCCu;
    SET_GPR_U32(ctx, 31, 0x185DD4u);
    ctx->pc = 0x185DD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185DCCu;
    // 0x185dd0: 0x27a600a0  addiu       $a2, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105180u, 0x185DCCu, 0x185DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185DD4u;
label_185dd4:
    // 0x185dd4: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x185dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x185dd8: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x185dd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x185ddc: 0xc041460  jal         func_105180
    ctx->pc = 0x185DDCu;
    SET_GPR_U32(ctx, 31, 0x185DE4u);
    ctx->pc = 0x185DE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185DDCu;
    // 0x185de0: 0x27a60060  addiu       $a2, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105180u, 0x185DDCu, 0x185DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185DE4u;
label_185de4:
    // 0x185de4: 0x27a401b0  addiu       $a0, $sp, 0x1B0
    ctx->pc = 0x185de4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x185de8: 0xc041472  jal         func_1051C8
    ctx->pc = 0x185DE8u;
    SET_GPR_U32(ctx, 31, 0x185DF0u);
    ctx->pc = 0x185DECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185DE8u;
    // 0x185dec: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051C8u, 0x185DE8u, 0x185DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185DF0u;
label_185df0:
    // 0x185df0: 0x27a401c0  addiu       $a0, $sp, 0x1C0
    ctx->pc = 0x185df0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x185df4: 0xc041472  jal         func_1051C8
    ctx->pc = 0x185DF4u;
    SET_GPR_U32(ctx, 31, 0x185DFCu);
    ctx->pc = 0x185DF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185DF4u;
    // 0x185df8: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051C8u, 0x185DF4u, 0x185DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185DFCu;
label_185dfc:
    // 0x185dfc: 0x27a401d0  addiu       $a0, $sp, 0x1D0
    ctx->pc = 0x185dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x185e00: 0xc041472  jal         func_1051C8
    ctx->pc = 0x185E00u;
    SET_GPR_U32(ctx, 31, 0x185E08u);
    ctx->pc = 0x185E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185E00u;
    // 0x185e04: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051C8u, 0x185E00u, 0x185E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185E08u;
label_185e08:
    // 0x185e08: 0x27a301e0  addiu       $v1, $sp, 0x1E0
    ctx->pc = 0x185e08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x185e0c: 0x26220080  addiu       $v0, $s1, 0x80
    ctx->pc = 0x185e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    // 0x185e10: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x185e10u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x185e14: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x185e14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x185e18: 0xc04150c  jal         func_105430
    ctx->pc = 0x185E18u;
    SET_GPR_U32(ctx, 31, 0x185E20u);
    ctx->pc = 0x185E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185E18u;
    // 0x185e1c: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105430u, 0x185E18u, 0x185E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185E20u;
label_185e20:
    // 0x185e20: 0xc7ac01fc  lwc1        $f12, 0x1FC($sp)
    ctx->pc = 0x185e20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 508)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x185e24: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x185e24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x185e28: 0xc04155e  jal         func_105578
    ctx->pc = 0x185E28u;
    SET_GPR_U32(ctx, 31, 0x185E30u);
    ctx->pc = 0x185E2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185E28u;
    // 0x185e2c: 0x27a50170  addiu       $a1, $sp, 0x170 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105578u, 0x185E28u, 0x185E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185E30u;
label_185e30:
    // 0x185e30: 0xc7ac01f8  lwc1        $f12, 0x1F8($sp)
    ctx->pc = 0x185e30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x185e34: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x185e34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x185e38: 0xc04155e  jal         func_105578
    ctx->pc = 0x185E38u;
    SET_GPR_U32(ctx, 31, 0x185E40u);
    ctx->pc = 0x185E3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185E38u;
    // 0x185e3c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105578u, 0x185E38u, 0x185E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185E40u;
label_185e40:
    // 0x185e40: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x185E40u;
    {
        const bool branch_taken_0x185e40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x185e40) {
            ctx->pc = 0x185EC8u;
            goto label_185ec8;
        }
    }
    ctx->pc = 0x185E48u;
label_185e48:
    // 0x185e48: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x185e48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x185e4c: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x185e4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x185e50: 0xc041460  jal         func_105180
    ctx->pc = 0x185E50u;
    SET_GPR_U32(ctx, 31, 0x185E58u);
    ctx->pc = 0x185E54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185E50u;
    // 0x185e54: 0x27a60090  addiu       $a2, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105180u, 0x185E50u, 0x185E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185E58u;
label_185e58:
    // 0x185e58: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x185e58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x185e5c: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x185e5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x185e60: 0xc041460  jal         func_105180
    ctx->pc = 0x185E60u;
    SET_GPR_U32(ctx, 31, 0x185E68u);
    ctx->pc = 0x185E64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185E60u;
    // 0x185e64: 0x27a600a0  addiu       $a2, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105180u, 0x185E60u, 0x185E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185E68u;
label_185e68:
    // 0x185e68: 0x27a401b0  addiu       $a0, $sp, 0x1B0
    ctx->pc = 0x185e68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x185e6c: 0xc041472  jal         func_1051C8
    ctx->pc = 0x185E6Cu;
    SET_GPR_U32(ctx, 31, 0x185E74u);
    ctx->pc = 0x185E70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185E6Cu;
    // 0x185e70: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051C8u, 0x185E6Cu, 0x185E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185E74u;
label_185e74:
    // 0x185e74: 0x27a401c0  addiu       $a0, $sp, 0x1C0
    ctx->pc = 0x185e74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x185e78: 0xc041472  jal         func_1051C8
    ctx->pc = 0x185E78u;
    SET_GPR_U32(ctx, 31, 0x185E80u);
    ctx->pc = 0x185E7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185E78u;
    // 0x185e7c: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051C8u, 0x185E78u, 0x185E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185E80u;
label_185e80:
    // 0x185e80: 0x27a401d0  addiu       $a0, $sp, 0x1D0
    ctx->pc = 0x185e80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x185e84: 0xc041472  jal         func_1051C8
    ctx->pc = 0x185E84u;
    SET_GPR_U32(ctx, 31, 0x185E8Cu);
    ctx->pc = 0x185E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185E84u;
    // 0x185e88: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051C8u, 0x185E84u, 0x185E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185E8Cu;
label_185e8c:
    // 0x185e8c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x185e8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185e90: 0x27a301e0  addiu       $v1, $sp, 0x1E0
    ctx->pc = 0x185e90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x185e94: 0x26220080  addiu       $v0, $s1, 0x80
    ctx->pc = 0x185e94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    // 0x185e98: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x185e98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x185e9c: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x185e9cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x185ea0: 0xc04150c  jal         func_105430
    ctx->pc = 0x185EA0u;
    SET_GPR_U32(ctx, 31, 0x185EA8u);
    ctx->pc = 0x185EA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185EA0u;
    // 0x185ea4: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105430u, 0x185EA0u, 0x185EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185EA8u;
label_185ea8:
    // 0x185ea8: 0xc7ac01fc  lwc1        $f12, 0x1FC($sp)
    ctx->pc = 0x185ea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 508)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x185eac: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x185eacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x185eb0: 0xc041588  jal         func_105620
    ctx->pc = 0x185EB0u;
    SET_GPR_U32(ctx, 31, 0x185EB8u);
    ctx->pc = 0x185EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185EB0u;
    // 0x185eb4: 0x27a50170  addiu       $a1, $sp, 0x170 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105620u, 0x185EB0u, 0x185EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185EB8u;
label_185eb8:
    // 0x185eb8: 0xc7ac01f8  lwc1        $f12, 0x1F8($sp)
    ctx->pc = 0x185eb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x185ebc: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x185ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x185ec0: 0xc041588  jal         func_105620
    ctx->pc = 0x185EC0u;
    SET_GPR_U32(ctx, 31, 0x185EC8u);
    ctx->pc = 0x185EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185EC0u;
    // 0x185ec4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105620u, 0x185EC0u, 0x185EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185EC8u;
label_185ec8:
    // 0x185ec8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x185ec8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185ecc: 0x26820010  addiu       $v0, $s4, 0x10
    ctx->pc = 0x185eccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x185ed0: 0x27a30160  addiu       $v1, $sp, 0x160
    ctx->pc = 0x185ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x185ed4: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x185ed4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x185ed8: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x185ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x185edc: 0x27a50170  addiu       $a1, $sp, 0x170
    ctx->pc = 0x185edcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x185ee0: 0x27a60130  addiu       $a2, $sp, 0x130
    ctx->pc = 0x185ee0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x185ee4: 0xc04144e  jal         func_105138
    ctx->pc = 0x185EE4u;
    SET_GPR_U32(ctx, 31, 0x185EECu);
    ctx->pc = 0x185EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185EE4u;
    // 0x185ee8: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105138u, 0x185EE4u, 0x185EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185EECu;
label_185eec:
    // 0x185eec: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x185eecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x185ef0: 0x27a501b0  addiu       $a1, $sp, 0x1B0
    ctx->pc = 0x185ef0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x185ef4: 0xc04144e  jal         func_105138
    ctx->pc = 0x185EF4u;
    SET_GPR_U32(ctx, 31, 0x185EFCu);
    ctx->pc = 0x185EF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185EF4u;
    // 0x185ef8: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105138u, 0x185EF4u, 0x185EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185EFCu;
label_185efc:
    // 0x185efc: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x185efcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x185f00: 0x27a501b0  addiu       $a1, $sp, 0x1B0
    ctx->pc = 0x185f00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x185f04: 0xc04144e  jal         func_105138
    ctx->pc = 0x185F04u;
    SET_GPR_U32(ctx, 31, 0x185F0Cu);
    ctx->pc = 0x185F08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185F04u;
    // 0x185f08: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105138u, 0x185F04u, 0x185F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185F0Cu;
label_185f0c:
    // 0x185f0c: 0x8e830060  lw          $v1, 0x60($s4)
    ctx->pc = 0x185f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 96)));
    // 0x185f10: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x185f10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x185f14: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x185F14u;
    {
        const bool branch_taken_0x185f14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x185F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185F14u;
        // 0x185f18: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185f14) {
            ctx->pc = 0x185F88u;
            goto label_185f88;
        }
    }
    ctx->pc = 0x185F1Cu;
    // 0x185f1c: 0xc041494  jal         func_105250
    ctx->pc = 0x185F1Cu;
    SET_GPR_U32(ctx, 31, 0x185F24u);
    ctx->pc = 0x185F20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185F1Cu;
    // 0x185f20: 0x26250040  addiu       $a1, $s1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105250u, 0x185F1Cu, 0x185F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185F24u;
label_185f24:
    // 0x185f24: 0x8e820068  lw          $v0, 0x68($s4)
    ctx->pc = 0x185f24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 104)));
    // 0x185f28: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x185f28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x185f2c: 0x27a60170  addiu       $a2, $sp, 0x170
    ctx->pc = 0x185f2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x185f30: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x185f30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x185f34: 0xc04144e  jal         func_105138
    ctx->pc = 0x185F34u;
    SET_GPR_U32(ctx, 31, 0x185F3Cu);
    ctx->pc = 0x185F38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185F34u;
    // 0x185f38: 0x2622021  addu        $a0, $s3, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105138u, 0x185F34u, 0x185F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185F3Cu;
label_185f3c:
    // 0x185f3c: 0x8e820060  lw          $v0, 0x60($s4)
    ctx->pc = 0x185f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 96)));
    // 0x185f40: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x185f40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x185f44: 0x1440005e  bnez        $v0, . + 4 + (0x5E << 2)
    ctx->pc = 0x185F44u;
    {
        const bool branch_taken_0x185f44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x185F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185F44u;
        // 0x185f48: 0x27b00170  addiu       $s0, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185f44) {
            ctx->pc = 0x1860C0u;
            goto label_1860c0;
        }
    }
    ctx->pc = 0x185F4Cu;
    // 0x185f4c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x185f4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185f50: 0x27a20130  addiu       $v0, $sp, 0x130
    ctx->pc = 0x185f50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x185f54: 0x78460000  lq          $a2, 0x0($v0)
    ctx->pc = 0x185f54u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x185f58: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x185f58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185f5c: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x185f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x185f60: 0x26250010  addiu       $a1, $s1, 0x10
    ctx->pc = 0x185f60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x185f64: 0x26230020  addiu       $v1, $s1, 0x20
    ctx->pc = 0x185f64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x185f68: 0x7e260000  sq          $a2, 0x0($s1)
    ctx->pc = 0x185f68u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 6));
    // 0x185f6c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x185f6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185f70: 0x78840000  lq          $a0, 0x0($a0)
    ctx->pc = 0x185f70u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x185f74: 0x27a20150  addiu       $v0, $sp, 0x150
    ctx->pc = 0x185f74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x185f78: 0x7ca40000  sq          $a0, 0x0($a1)
    ctx->pc = 0x185f78u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 4));
    // 0x185f7c: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x185f7cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x185f80: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x185F80u;
    {
        const bool branch_taken_0x185f80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185F80u;
        // 0x185f84: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185f80) {
            ctx->pc = 0x1860C0u;
            goto label_1860c0;
        }
    }
    ctx->pc = 0x185F88u;
label_185f88:
    // 0x185f88: 0x30620040  andi        $v0, $v1, 0x40
    ctx->pc = 0x185f88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x185f8c: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x185F8Cu;
    {
        const bool branch_taken_0x185f8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x185F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185F8Cu;
        // 0x185f90: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185f8c) {
            ctx->pc = 0x186058u;
            goto label_186058;
        }
    }
    ctx->pc = 0x185F94u;
    // 0x185f94: 0xc041494  jal         func_105250
    ctx->pc = 0x185F94u;
    SET_GPR_U32(ctx, 31, 0x185F9Cu);
    ctx->pc = 0x185F98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185F94u;
    // 0x185f98: 0x26250040  addiu       $a1, $s1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105250u, 0x185F94u, 0x185F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185F9Cu;
label_185f9c:
    // 0x185f9c: 0x8e820068  lw          $v0, 0x68($s4)
    ctx->pc = 0x185f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 104)));
    // 0x185fa0: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x185fa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x185fa4: 0x27a60170  addiu       $a2, $sp, 0x170
    ctx->pc = 0x185fa4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x185fa8: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x185fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x185fac: 0xc04144e  jal         func_105138
    ctx->pc = 0x185FACu;
    SET_GPR_U32(ctx, 31, 0x185FB4u);
    ctx->pc = 0x185FB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185FACu;
    // 0x185fb0: 0x2622021  addu        $a0, $s3, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105138u, 0x185FACu, 0x185FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185FB4u;
label_185fb4:
    // 0x185fb4: 0x26050030  addiu       $a1, $s0, 0x30
    ctx->pc = 0x185fb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x185fb8: 0xc04d660  jal         func_135980
    ctx->pc = 0x185FB8u;
    SET_GPR_U32(ctx, 31, 0x185FC0u);
    ctx->pc = 0x185FBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185FB8u;
    // 0x185fbc: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135980u, 0x185FB8u, 0x185FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185FC0u;
label_185fc0:
    // 0x185fc0: 0x8e820068  lw          $v0, 0x68($s4)
    ctx->pc = 0x185fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 104)));
    // 0x185fc4: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x185fc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x185fc8: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x185fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x185fcc: 0x2622021  addu        $a0, $s3, $v0
    ctx->pc = 0x185fccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x185fd0: 0xc04144e  jal         func_105138
    ctx->pc = 0x185FD0u;
    SET_GPR_U32(ctx, 31, 0x185FD8u);
    ctx->pc = 0x185FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185FD0u;
    // 0x185fd4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105138u, 0x185FD0u, 0x185FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185FD8u;
label_185fd8:
    // 0x185fd8: 0x27a60170  addiu       $a2, $sp, 0x170
    ctx->pc = 0x185fd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x185fdc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x185fdcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185fe0: 0x78c80000  lq          $t0, 0x0($a2)
    ctx->pc = 0x185fe0u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x185fe4: 0x27a700f0  addiu       $a3, $sp, 0xF0
    ctx->pc = 0x185fe4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x185fe8: 0x27a20160  addiu       $v0, $sp, 0x160
    ctx->pc = 0x185fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x185fec: 0x27a30120  addiu       $v1, $sp, 0x120
    ctx->pc = 0x185fecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x185ff0: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x185ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x185ff4: 0x26250040  addiu       $a1, $s1, 0x40
    ctx->pc = 0x185ff4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x185ff8: 0x7ce80000  sq          $t0, 0x0($a3)
    ctx->pc = 0x185ff8u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 8));
    // 0x185ffc: 0x78c80010  lq          $t0, 0x10($a2)
    ctx->pc = 0x185ffcu;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x186000: 0x7ce80010  sq          $t0, 0x10($a3)
    ctx->pc = 0x186000u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 16), GPR_VEC(ctx, 8));
    // 0x186004: 0x78c80020  lq          $t0, 0x20($a2)
    ctx->pc = 0x186004u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x186008: 0x7ce80020  sq          $t0, 0x20($a3)
    ctx->pc = 0x186008u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 32), GPR_VEC(ctx, 8));
    // 0x18600c: 0x78c80030  lq          $t0, 0x30($a2)
    ctx->pc = 0x18600cu;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x186010: 0x7ce80030  sq          $t0, 0x30($a3)
    ctx->pc = 0x186010u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 48), GPR_VEC(ctx, 8));
    // 0x186014: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x186014u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x186018: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x186018u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x18601c: 0x8e820068  lw          $v0, 0x68($s4)
    ctx->pc = 0x18601cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 104)));
    // 0x186020: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x186020u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x186024: 0xc04144e  jal         func_105138
    ctx->pc = 0x186024u;
    SET_GPR_U32(ctx, 31, 0x18602Cu);
    ctx->pc = 0x186028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186024u;
    // 0x186028: 0x2623021  addu        $a2, $s3, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105138u, 0x186024u, 0x18602Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18602Cu;
label_18602c:
    // 0x18602c: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x18602cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x186030: 0xc041494  jal         func_105250
    ctx->pc = 0x186030u;
    SET_GPR_U32(ctx, 31, 0x186038u);
    ctx->pc = 0x186034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186030u;
    // 0x186034: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105250u, 0x186030u, 0x186038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186038u;
label_186038:
    // 0x186038: 0x8e82007c  lw          $v0, 0x7C($s4)
    ctx->pc = 0x186038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 124)));
    // 0x18603c: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x18603cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x186040: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x186040u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x186044: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x186044u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x186048: 0xc04144e  jal         func_105138
    ctx->pc = 0x186048u;
    SET_GPR_U32(ctx, 31, 0x186050u);
    ctx->pc = 0x18604Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186048u;
    // 0x18604c: 0x2622021  addu        $a0, $s3, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105138u, 0x186048u, 0x186050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186050u;
label_186050:
    // 0x186050: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x186050u;
    {
        const bool branch_taken_0x186050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186050u;
        // 0x186054: 0x27b000f0  addiu       $s0, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186050) {
            ctx->pc = 0x1860C0u;
            goto label_1860c0;
        }
    }
    ctx->pc = 0x186058u;
label_186058:
    // 0x186058: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x186058u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x18605c: 0xc041494  jal         func_105250
    ctx->pc = 0x18605Cu;
    SET_GPR_U32(ctx, 31, 0x186064u);
    ctx->pc = 0x186060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18605Cu;
    // 0x186060: 0x26250040  addiu       $a1, $s1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105250u, 0x18605Cu, 0x186064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186064u;
label_186064:
    // 0x186064: 0x8e820068  lw          $v0, 0x68($s4)
    ctx->pc = 0x186064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 104)));
    // 0x186068: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x186068u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x18606c: 0x27a60170  addiu       $a2, $sp, 0x170
    ctx->pc = 0x18606cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x186070: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x186070u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x186074: 0xc04144e  jal         func_105138
    ctx->pc = 0x186074u;
    SET_GPR_U32(ctx, 31, 0x18607Cu);
    ctx->pc = 0x186078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186074u;
    // 0x186078: 0x2622021  addu        $a0, $s3, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105138u, 0x186074u, 0x18607Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18607Cu;
label_18607c:
    // 0x18607c: 0x26050030  addiu       $a1, $s0, 0x30
    ctx->pc = 0x18607cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x186080: 0xc04d660  jal         func_135980
    ctx->pc = 0x186080u;
    SET_GPR_U32(ctx, 31, 0x186088u);
    ctx->pc = 0x186084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186080u;
    // 0x186084: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135980u, 0x186080u, 0x186088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186088u;
label_186088:
    // 0x186088: 0x8e820068  lw          $v0, 0x68($s4)
    ctx->pc = 0x186088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 104)));
    // 0x18608c: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x18608cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x186090: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x186090u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x186094: 0x2622021  addu        $a0, $s3, $v0
    ctx->pc = 0x186094u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x186098: 0xc04144e  jal         func_105138
    ctx->pc = 0x186098u;
    SET_GPR_U32(ctx, 31, 0x1860A0u);
    ctx->pc = 0x18609Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186098u;
    // 0x18609c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105138u, 0x186098u, 0x1860A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1860A0u;
label_1860a0:
    // 0x1860a0: 0x8e820068  lw          $v0, 0x68($s4)
    ctx->pc = 0x1860a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 104)));
    // 0x1860a4: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x1860a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x1860a8: 0x26250040  addiu       $a1, $s1, 0x40
    ctx->pc = 0x1860a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x1860ac: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x1860acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x1860b0: 0xc04144e  jal         func_105138
    ctx->pc = 0x1860B0u;
    SET_GPR_U32(ctx, 31, 0x1860B8u);
    ctx->pc = 0x1860B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1860B0u;
    // 0x1860b4: 0x2623021  addu        $a2, $s3, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105138u, 0x1860B0u, 0x1860B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1860B8u;
label_1860b8:
    // 0x1860b8: 0x27b00170  addiu       $s0, $sp, 0x170
    ctx->pc = 0x1860b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x1860bc: 0x0  nop
    ctx->pc = 0x1860bcu;
    // NOP
label_1860c0:
    // 0x1860c0: 0x12400011  beqz        $s2, . + 4 + (0x11 << 2)
    ctx->pc = 0x1860C0u;
    {
        const bool branch_taken_0x1860c0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1860C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1860C0u;
        // 0x1860c4: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1860c0) {
            ctx->pc = 0x186108u;
            goto label_186108;
        }
    }
    ctx->pc = 0x1860C8u;
    // 0x1860c8: 0xc041494  jal         func_105250
    ctx->pc = 0x1860C8u;
    SET_GPR_U32(ctx, 31, 0x1860D0u);
    ctx->pc = 0x1860CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1860C8u;
    // 0x1860cc: 0x27a50130  addiu       $a1, $sp, 0x130 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105250u, 0x1860C8u, 0x1860D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1860D0u;
label_1860d0:
    // 0x1860d0: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1860d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1860d4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1860d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1860d8: 0xc04144e  jal         func_105138
    ctx->pc = 0x1860D8u;
    SET_GPR_U32(ctx, 31, 0x1860E0u);
    ctx->pc = 0x1860DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1860D8u;
    // 0x1860dc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105138u, 0x1860D8u, 0x1860E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1860E0u;
label_1860e0:
    // 0x1860e0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1860e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1860e4: 0x27a300e0  addiu       $v1, $sp, 0xE0
    ctx->pc = 0x1860e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1860e8: 0x26820020  addiu       $v0, $s4, 0x20
    ctx->pc = 0x1860e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x1860ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1860ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1860f0: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x1860f0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1860f4: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x1860f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x1860f8: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x1860f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1860fc: 0xc04144e  jal         func_105138
    ctx->pc = 0x1860FCu;
    SET_GPR_U32(ctx, 31, 0x186104u);
    ctx->pc = 0x186100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1860FCu;
    // 0x186100: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105138u, 0x1860FCu, 0x186104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186104u;
label_186104:
    // 0x186104: 0x0  nop
    ctx->pc = 0x186104u;
    // NOP
label_186108:
    // 0x186108: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x186108u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18610c: 0xc041494  jal         func_105250
    ctx->pc = 0x18610Cu;
    SET_GPR_U32(ctx, 31, 0x186114u);
    ctx->pc = 0x186110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18610Cu;
    // 0x186110: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105250u, 0x18610Cu, 0x186114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186114u;
label_186114:
    // 0x186114: 0x8e82006c  lw          $v0, 0x6C($s4)
    ctx->pc = 0x186114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 108)));
    // 0x186118: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x186118u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x18611c: 0x27a60130  addiu       $a2, $sp, 0x130
    ctx->pc = 0x18611cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x186120: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x186120u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x186124: 0xc04144e  jal         func_105138
    ctx->pc = 0x186124u;
    SET_GPR_U32(ctx, 31, 0x18612Cu);
    ctx->pc = 0x186128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186124u;
    // 0x186128: 0x2622021  addu        $a0, $s3, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105138u, 0x186124u, 0x18612Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18612Cu;
label_18612c:
    // 0x18612c: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x18612cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x186130: 0xc041494  jal         func_105250
    ctx->pc = 0x186130u;
    SET_GPR_U32(ctx, 31, 0x186138u);
    ctx->pc = 0x186134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186130u;
    // 0x186134: 0x27a50130  addiu       $a1, $sp, 0x130 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105250u, 0x186130u, 0x186138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186138u;
label_186138:
    // 0x186138: 0x8e820070  lw          $v0, 0x70($s4)
    ctx->pc = 0x186138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 112)));
    // 0x18613c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x18613cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186140: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x186140u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x186144: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x186144u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x186148: 0xc04144e  jal         func_105138
    ctx->pc = 0x186148u;
    SET_GPR_U32(ctx, 31, 0x186150u);
    ctx->pc = 0x18614Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186148u;
    // 0x18614c: 0x2622021  addu        $a0, $s3, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105138u, 0x186148u, 0x186150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186150u;
label_186150:
    // 0x186150: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x186150u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x186154: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x186154u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x186158: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x186158u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18615c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x18615cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x186160: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x186160u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x186164: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x186164u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x186168: 0x3e00008  jr          $ra
    ctx->pc = 0x186168u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18616Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186168u;
        // 0x18616c: 0x27bd0200  addiu       $sp, $sp, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x186168u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x186170u;
}
