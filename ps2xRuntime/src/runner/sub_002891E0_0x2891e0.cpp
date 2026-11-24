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

// Function: sub_002891E0
// Address: 0x2891e0 - 0x2892c0
void sub_002891E0_0x2891e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002891E0_0x2891e0");
#endif

    switch (ctx->pc) {
        case 0x289278u: goto label_289278;
        case 0x289284u: goto label_289284;
        case 0x289298u: goto label_289298;
        case 0x2892a8u: goto label_2892a8;
        default: break;
    }

    ctx->pc = 0x2891e0u;

    // 0x2891e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2891e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2891e4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2891e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2891e8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2891e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2891ec: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2891ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2891f0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2891f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2891f4: 0x3c034270  lui         $v1, 0x4270
    ctx->pc = 0x2891f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17008 << 16));
    // 0x2891f8: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x2891f8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2891fc: 0x3c060067  lui         $a2, 0x67
    ctx->pc = 0x2891fcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)103 << 16));
    // 0x289200: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x289200u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x289204: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x289204u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x289208: 0xc7808078  lwc1        $f0, -0x7F88($gp)
    ctx->pc = 0x289208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28920c: 0x90870002  lbu         $a3, 0x2($a0)
    ctx->pc = 0x28920cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x289210: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x289210u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x289214: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x289214u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289218: 0x24c60b8c  addiu       $a2, $a2, 0xB8C
    ctx->pc = 0x289218u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2956));
    // 0x28921c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x28921cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x289220: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x289220u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x289224: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x289224u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x289228: 0x3c024500  lui         $v0, 0x4500
    ctx->pc = 0x289228u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17664 << 16));
    // 0x28922c: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x28922cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
    // 0x289230: 0x718c0  sll         $v1, $a3, 3
    ctx->pc = 0x289230u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x289234: 0x671823  subu        $v1, $v1, $a3
    ctx->pc = 0x289234u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x289238: 0x848404ec  lh          $a0, 0x4EC($a0)
    ctx->pc = 0x289238u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 1260)));
    // 0x28923c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x28923cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x289240: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x289240u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x289244: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x289244u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x289248: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x289248u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x28924c: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x28924cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x289250: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x289250u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x289254: 0x46001542  mul.s       $f21, $f2, $f0
    ctx->pc = 0x289254u;
    ctx->f[21] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x289258: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x289258u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x28925c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28925cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x289260: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x289260u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x289264: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x289264u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x289268: 0x46000d03  div.s       $f20, $f1, $f0
    ctx->pc = 0x289268u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x28926c: 0xf8e00000  sqc2        $vf0, 0x0($a3)
    ctx->pc = 0x28926cu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x289270: 0xc047b2c  jal         func_11ECB0
    ctx->pc = 0x289270u;
    SET_GPR_U32(ctx, 31, 0x289278u);
    ctx->pc = 0x289274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289270u;
    // 0x289274: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11ECB0u, 0x289270u, 0x289278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289278u;
label_289278:
    // 0x289278: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x289278u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x28927c: 0xc047a98  jal         func_11EA60
    ctx->pc = 0x28927Cu;
    SET_GPR_U32(ctx, 31, 0x289284u);
    ctx->pc = 0x289280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28927Cu;
    // 0x289280: 0xe7a00030  swc1        $f0, 0x30($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EA60u, 0x28927Cu, 0x289284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289284u;
label_289284:
    // 0x289284: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x289284u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x289288: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x289288u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x28928c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x28928cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289290: 0xc0414dc  jal         func_105370
    ctx->pc = 0x289290u;
    SET_GPR_U32(ctx, 31, 0x289298u);
    ctx->pc = 0x289294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289290u;
    // 0x289294: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x289290u, 0x289298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289298u;
label_289298:
    // 0x289298: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x289298u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x28929c: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x28929cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2892a0: 0xc0414ca  jal         func_105328
    ctx->pc = 0x2892A0u;
    SET_GPR_U32(ctx, 31, 0x2892A8u);
    ctx->pc = 0x2892A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2892A0u;
    // 0x2892a4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x2892A0u, 0x2892A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2892A8u;
label_2892a8:
    // 0x2892a8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2892a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2892ac: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x2892acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2892b0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2892b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2892b4: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2892b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2892b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2892B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2892BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2892B8u;
        // 0x2892bc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2892B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2892C0u;
}
