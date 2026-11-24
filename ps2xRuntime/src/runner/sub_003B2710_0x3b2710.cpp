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

// Function: sub_003B2710
// Address: 0x3b2710 - 0x3b27d0
void sub_003B2710_0x3b2710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B2710_0x3b2710");
#endif

    switch (ctx->pc) {
        case 0x3b2780u: goto label_3b2780;
        case 0x3b2798u: goto label_3b2798;
        case 0x3b27a8u: goto label_3b27a8;
        case 0x3b27bcu: goto label_3b27bc;
        default: break;
    }

    ctx->pc = 0x3b2710u;

    // 0x3b2710: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3b2710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3b2714: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x3b2714u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x3b2718: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3b2718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3b271c: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x3b271cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x3b2720: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3b2720u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3b2724: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x3b2724u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x3b2728: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x3b2728u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3b272c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3b272cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b2730: 0x78850020  lq          $a1, 0x20($a0)
    ctx->pc = 0x3b2730u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x3b2734: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3b2734u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3b2738: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x3b2738u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3b273c: 0x3c024500  lui         $v0, 0x4500
    ctx->pc = 0x3b273cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17664 << 16));
    // 0x3b2740: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3b2740u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b2744: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x3b2744u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x3b2748: 0x7fa50040  sq          $a1, 0x40($sp)
    ctx->pc = 0x3b2748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 5));
    // 0x3b274c: 0xc7a30044  lwc1        $f3, 0x44($sp)
    ctx->pc = 0x3b274cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3b2750: 0x46021880  add.s       $f2, $f3, $f2
    ctx->pc = 0x3b2750u;
    ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x3b2754: 0xe7a20044  swc1        $f2, 0x44($sp)
    ctx->pc = 0x3b2754u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x3b2758: 0x848200c2  lh          $v0, 0xC2($a0)
    ctx->pc = 0x3b2758u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 194)));
    // 0x3b275c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x3b275cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3b2760: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x3b2760u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3b2764: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x3b2764u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x3b2768: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3b2768u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3b276c: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x3b276cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x3b2770: 0x0  nop
    ctx->pc = 0x3b2770u;
    // NOP
    // 0x3b2774: 0x0  nop
    ctx->pc = 0x3b2774u;
    // NOP
    // 0x3b2778: 0xc096784  jal         func_259E10
    ctx->pc = 0x3B2778u;
    SET_GPR_U32(ctx, 31, 0x3B2780u);
    ctx->pc = 0x259E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259E10u, 0x3B2778u, 0x3B2780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B2780u;
label_3b2780:
    // 0x3b2780: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x3b2780u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x3b2784: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x3b2784u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3b2788: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3b2788u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b278c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3b278cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b2790: 0xc0414dc  jal         func_105370
    ctx->pc = 0x3B2790u;
    SET_GPR_U32(ctx, 31, 0x3B2798u);
    ctx->pc = 0x3B2794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B2790u;
    // 0x3b2794: 0x46140302  mul.s       $f12, $f0, $f20 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x3B2790u, 0x3B2798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B2798u;
label_3b2798:
    // 0x3b2798: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x3b2798u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3b279c: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x3b279cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3b27a0: 0xc0414ca  jal         func_105328
    ctx->pc = 0x3B27A0u;
    SET_GPR_U32(ctx, 31, 0x3B27A8u);
    ctx->pc = 0x3B27A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B27A0u;
    // 0x3b27a4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x3B27A0u, 0x3B27A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B27A8u;
label_3b27a8:
    // 0x3b27a8: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x3b27a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b27ac: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3b27acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b27b0: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x3b27b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3b27b4: 0xc0ec964  jal         func_3B2590
    ctx->pc = 0x3B27B4u;
    SET_GPR_U32(ctx, 31, 0x3B27BCu);
    ctx->pc = 0x3B27B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B27B4u;
    // 0x3b27b8: 0x27a60040  addiu       $a2, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B2590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B2590u, 0x3B27B4u, 0x3B27BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B27BCu;
label_3b27bc:
    // 0x3b27bc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3b27bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3b27c0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3b27c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3b27c4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3b27c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b27c8: 0x3e00008  jr          $ra
    ctx->pc = 0x3B27C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B27CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B27C8u;
        // 0x3b27cc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B27C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B27D0u;
}
