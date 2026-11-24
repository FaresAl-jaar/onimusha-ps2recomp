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

// Function: sub_002895B0
// Address: 0x2895b0 - 0x28966c
void sub_002895B0_0x2895b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002895B0_0x2895b0");
#endif

    switch (ctx->pc) {
        case 0x289600u: goto label_289600;
        case 0x28960cu: goto label_28960c;
        case 0x289648u: goto label_289648;
        default: break;
    }

    ctx->pc = 0x2895b0u;

    // 0x2895b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2895b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2895b4: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x2895b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x2895b8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2895b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2895bc: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x2895bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2895c0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2895c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2895c4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2895c4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2895c8: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2895c8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2895cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2895ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2895d0: 0x848404ec  lh          $a0, 0x4EC($a0)
    ctx->pc = 0x2895d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 1260)));
    // 0x2895d4: 0x3c024500  lui         $v0, 0x4500
    ctx->pc = 0x2895d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17664 << 16));
    // 0x2895d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2895d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2895dc: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x2895dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2895e0: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x2895e0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2895e4: 0x0  nop
    ctx->pc = 0x2895e4u;
    // NOP
    // 0x2895e8: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2895e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2895ec: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2895ecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2895f0: 0x46000d03  div.s       $f20, $f1, $f0
    ctx->pc = 0x2895f0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2895f4: 0xf8600000  sqc2        $vf0, 0x0($v1)
    ctx->pc = 0x2895f4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2895f8: 0xc047b2c  jal         func_11ECB0
    ctx->pc = 0x2895F8u;
    SET_GPR_U32(ctx, 31, 0x289600u);
    ctx->pc = 0x2895FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2895F8u;
    // 0x2895fc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11ECB0u, 0x2895F8u, 0x289600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289600u;
label_289600:
    // 0x289600: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x289600u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x289604: 0xc047a98  jal         func_11EA60
    ctx->pc = 0x289604u;
    SET_GPR_U32(ctx, 31, 0x28960Cu);
    ctx->pc = 0x289608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289604u;
    // 0x289608: 0xe7a00030  swc1        $f0, 0x30($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EA60u, 0x289604u, 0x28960Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28960Cu;
label_28960c:
    // 0x28960c: 0xc7818078  lwc1        $f1, -0x7F88($gp)
    ctx->pc = 0x28960cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x289610: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x289610u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x289614: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x289614u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x289618: 0x26040910  addiu       $a0, $s0, 0x910
    ctx->pc = 0x289618u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2320));
    // 0x28961c: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x28961cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x289620: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x289620u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x289624: 0x3c024473  lui         $v0, 0x4473
    ctx->pc = 0x289624u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17523 << 16));
    // 0x289628: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x289628u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x28962c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28962cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x289630: 0x0  nop
    ctx->pc = 0x289630u;
    // NOP
    // 0x289634: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x289634u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x289638: 0x0  nop
    ctx->pc = 0x289638u;
    // NOP
    // 0x28963c: 0x0  nop
    ctx->pc = 0x28963cu;
    // NOP
    // 0x289640: 0xc0414dc  jal         func_105370
    ctx->pc = 0x289640u;
    SET_GPR_U32(ctx, 31, 0x289648u);
    ctx->pc = 0x289644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289640u;
    // 0x289644: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x289640u, 0x289648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289648u;
label_289648:
    // 0x289648: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x289648u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x28964c: 0xa6030900  sh          $v1, 0x900($s0)
    ctx->pc = 0x28964cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2304), (uint16_t)GPR_U32(ctx, 3));
    // 0x289650: 0x9203065c  lbu         $v1, 0x65C($s0)
    ctx->pc = 0x289650u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1628)));
    // 0x289654: 0xa20308fe  sb          $v1, 0x8FE($s0)
    ctx->pc = 0x289654u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2302), (uint8_t)GPR_U32(ctx, 3));
    // 0x289658: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x289658u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28965c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x28965cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x289660: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x289660u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x289664: 0x3e00008  jr          $ra
    ctx->pc = 0x289664u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x289668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289664u;
        // 0x289668: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x289664u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28966Cu;
}
