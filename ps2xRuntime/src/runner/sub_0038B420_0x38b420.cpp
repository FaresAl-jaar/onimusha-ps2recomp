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

// Function: sub_0038B420
// Address: 0x38b420 - 0x38b4ec
void sub_0038B420_0x38b420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038B420_0x38b420");
#endif

    switch (ctx->pc) {
        case 0x38b478u: goto label_38b478;
        case 0x38b494u: goto label_38b494;
        case 0x38b4d8u: goto label_38b4d8;
        default: break;
    }

    ctx->pc = 0x38b420u;

    // 0x38b420: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x38b420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x38b424: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x38b424u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x38b428: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x38b428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x38b42c: 0x27838060  addiu       $v1, $gp, -0x7FA0
    ctx->pc = 0x38b42cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x38b430: 0x90256c1c  lbu         $a1, 0x6C1C($at)
    ctx->pc = 0x38b430u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x38b434: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x38b434u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x38b438: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x38b438u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x38b43c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x38b43cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x38b440: 0x10600027  beqz        $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x38B440u;
    {
        const bool branch_taken_0x38b440 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x38B444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B440u;
        // 0x38b444: 0x848200c2  lh          $v0, 0xC2($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 194)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38b440) {
            ctx->pc = 0x38B4E0u;
            goto label_38b4e0;
        }
    }
    ctx->pc = 0x38B448u;
    // 0x38b448: 0xc4630020  lwc1        $f3, 0x20($v1)
    ctx->pc = 0x38b448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x38b44c: 0x24850020  addiu       $a1, $a0, 0x20
    ctx->pc = 0x38b44cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x38b450: 0xc4620024  lwc1        $f2, 0x24($v1)
    ctx->pc = 0x38b450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x38b454: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x38b454u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x38b458: 0xc4610028  lwc1        $f1, 0x28($v1)
    ctx->pc = 0x38b458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x38b45c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x38b45cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x38b460: 0xc460002c  lwc1        $f0, 0x2C($v1)
    ctx->pc = 0x38b460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x38b464: 0xe4c30000  swc1        $f3, 0x0($a2)
    ctx->pc = 0x38b464u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x38b468: 0xe4c20004  swc1        $f2, 0x4($a2)
    ctx->pc = 0x38b468u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x38b46c: 0xe4c10008  swc1        $f1, 0x8($a2)
    ctx->pc = 0x38b46cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x38b470: 0xc0414d0  jal         func_105340
    ctx->pc = 0x38B470u;
    SET_GPR_U32(ctx, 31, 0x38B478u);
    ctx->pc = 0x38B474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38B470u;
    // 0x38b474: 0xe4c0000c  swc1        $f0, 0xC($a2) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x38B470u, 0x38B478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38B478u;
label_38b478:
    // 0x38b478: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x38b478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x38b47c: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x38b47cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x38b480: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x38b480u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x38b484: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x38b484u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x38b488: 0xc7ad0038  lwc1        $f13, 0x38($sp)
    ctx->pc = 0x38b488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x38b48c: 0xc047b88  jal         func_11EE20
    ctx->pc = 0x38B48Cu;
    SET_GPR_U32(ctx, 31, 0x38B494u);
    ctx->pc = 0x38B490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38B48Cu;
    // 0x38b490: 0xc7ac0030  lwc1        $f12, 0x30($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EE20u, 0x38B48Cu, 0x38B494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38B494u;
label_38b494:
    // 0x38b494: 0x3c034500  lui         $v1, 0x4500
    ctx->pc = 0x38b494u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17664 << 16));
    // 0x38b498: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x38b498u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x38b49c: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x38b49cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x38b4a0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x38b4a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x38b4a4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x38b4a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x38b4a8: 0x0  nop
    ctx->pc = 0x38b4a8u;
    // NOP
    // 0x38b4ac: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x38b4acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x38b4b0: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x38b4b0u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x38b4b4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x38b4b4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x38b4b8: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x38b4b8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x38b4bc: 0x0  nop
    ctx->pc = 0x38b4bcu;
    // NOP
    // 0x38b4c0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x38b4c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x38b4c4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x38b4c4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x38b4c8: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x38b4c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x38b4cc: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x38b4ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
    // 0x38b4d0: 0xc0967cc  jal         func_259F30
    ctx->pc = 0x38B4D0u;
    SET_GPR_U32(ctx, 31, 0x38B4D8u);
    ctx->pc = 0x38B4D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38B4D0u;
    // 0x38b4d4: 0x4243f  dsra32      $a0, $a0, 16 (Delay Slot)
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x259F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259F30u, 0x38B4D0u, 0x38B4D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38B4D8u;
label_38b4d8:
    // 0x38b4d8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x38b4d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x38b4dc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x38b4dcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_38b4e0:
    // 0x38b4e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x38b4e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38b4e4: 0x3e00008  jr          $ra
    ctx->pc = 0x38B4E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38B4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B4E4u;
        // 0x38b4e8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38B4E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38B4ECu;
}
