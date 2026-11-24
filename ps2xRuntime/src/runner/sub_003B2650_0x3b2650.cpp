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

// Function: sub_003B2650
// Address: 0x3b2650 - 0x3b2708
void sub_003B2650_0x3b2650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B2650_0x3b2650");
#endif

    switch (ctx->pc) {
        case 0x3b26c0u: goto label_3b26c0;
        case 0x3b26d0u: goto label_3b26d0;
        case 0x3b26e0u: goto label_3b26e0;
        case 0x3b26f4u: goto label_3b26f4;
        default: break;
    }

    ctx->pc = 0x3b2650u;

    // 0x3b2650: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3b2650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3b2654: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x3b2654u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x3b2658: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3b2658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3b265c: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x3b265cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x3b2660: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3b2660u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3b2664: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x3b2664u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x3b2668: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x3b2668u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3b266c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3b266cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b2670: 0x78850020  lq          $a1, 0x20($a0)
    ctx->pc = 0x3b2670u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x3b2674: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3b2674u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3b2678: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x3b2678u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3b267c: 0x3c024500  lui         $v0, 0x4500
    ctx->pc = 0x3b267cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17664 << 16));
    // 0x3b2680: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3b2680u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b2684: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x3b2684u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x3b2688: 0x7fa50040  sq          $a1, 0x40($sp)
    ctx->pc = 0x3b2688u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 5));
    // 0x3b268c: 0xc7a30044  lwc1        $f3, 0x44($sp)
    ctx->pc = 0x3b268cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3b2690: 0x46021880  add.s       $f2, $f3, $f2
    ctx->pc = 0x3b2690u;
    ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x3b2694: 0xe7a20044  swc1        $f2, 0x44($sp)
    ctx->pc = 0x3b2694u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x3b2698: 0x848200c2  lh          $v0, 0xC2($a0)
    ctx->pc = 0x3b2698u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 194)));
    // 0x3b269c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x3b269cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3b26a0: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x3b26a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3b26a4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x3b26a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x3b26a8: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3b26a8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3b26ac: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x3b26acu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x3b26b0: 0x0  nop
    ctx->pc = 0x3b26b0u;
    // NOP
    // 0x3b26b4: 0x0  nop
    ctx->pc = 0x3b26b4u;
    // NOP
    // 0x3b26b8: 0xc096784  jal         func_259E10
    ctx->pc = 0x3B26B8u;
    SET_GPR_U32(ctx, 31, 0x3B26C0u);
    ctx->pc = 0x259E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259E10u, 0x3B26B8u, 0x3B26C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B26C0u;
label_3b26c0:
    // 0x3b26c0: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x3b26c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3b26c4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3b26c4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x3b26c8: 0xc0414dc  jal         func_105370
    ctx->pc = 0x3B26C8u;
    SET_GPR_U32(ctx, 31, 0x3B26D0u);
    ctx->pc = 0x3B26CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B26C8u;
    // 0x3b26cc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x3B26C8u, 0x3B26D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B26D0u;
label_3b26d0:
    // 0x3b26d0: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x3b26d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3b26d4: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x3b26d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3b26d8: 0xc0414ca  jal         func_105328
    ctx->pc = 0x3B26D8u;
    SET_GPR_U32(ctx, 31, 0x3B26E0u);
    ctx->pc = 0x3B26DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B26D8u;
    // 0x3b26dc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x3B26D8u, 0x3B26E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B26E0u;
label_3b26e0:
    // 0x3b26e0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x3b26e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b26e4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3b26e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b26e8: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x3b26e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3b26ec: 0xc0ec964  jal         func_3B2590
    ctx->pc = 0x3B26ECu;
    SET_GPR_U32(ctx, 31, 0x3B26F4u);
    ctx->pc = 0x3B26F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B26ECu;
    // 0x3b26f0: 0x27a60040  addiu       $a2, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B2590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B2590u, 0x3B26ECu, 0x3B26F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B26F4u;
label_3b26f4:
    // 0x3b26f4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3b26f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3b26f8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3b26f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3b26fc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3b26fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b2700: 0x3e00008  jr          $ra
    ctx->pc = 0x3B2700u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B2704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2700u;
        // 0x3b2704: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B2700u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B2708u;
}
