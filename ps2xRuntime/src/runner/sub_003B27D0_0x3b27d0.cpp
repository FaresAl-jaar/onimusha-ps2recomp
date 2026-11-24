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

// Function: sub_003B27D0
// Address: 0x3b27d0 - 0x3b28a4
void sub_003B27D0_0x3b27d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B27D0_0x3b27d0");
#endif

    switch (ctx->pc) {
        case 0x3b2830u: goto label_3b2830;
        default: break;
    }

    ctx->pc = 0x3b27d0u;

    // 0x3b27d0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3b27d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3b27d4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3b27d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3b27d8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3b27d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3b27dc: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x3b27dcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3b27e0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3b27e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b27e4: 0x78830060  lq          $v1, 0x60($a0)
    ctx->pc = 0x3b27e4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 96)));
    // 0x3b27e8: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x3b27e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
    // 0x3b27ec: 0xe7ad0034  swc1        $f13, 0x34($sp)
    ctx->pc = 0x3b27ecu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x3b27f0: 0x8c840030  lw          $a0, 0x30($a0)
    ctx->pc = 0x3b27f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x3b27f4: 0x8c8306ac  lw          $v1, 0x6AC($a0)
    ctx->pc = 0x3b27f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1708)));
    // 0x3b27f8: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x3b27f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x3b27fc: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3B27FCu;
    {
        const bool branch_taken_0x3b27fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B2800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B27FCu;
        // 0x3b2800: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b27fc) {
            ctx->pc = 0x3B2818u;
            goto label_3b2818;
        }
    }
    ctx->pc = 0x3B2804u;
    // 0x3b2804: 0xc4800024  lwc1        $f0, 0x24($a0)
    ctx->pc = 0x3b2804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b2808: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x3b2808u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x3b280c: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x3B280Cu;
    {
        const bool branch_taken_0x3b280c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B2810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B280Cu;
        // 0x3b2810: 0xe6000064  swc1        $f0, 0x64($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b280c) {
            ctx->pc = 0x3B2890u;
            goto label_3b2890;
        }
    }
    ctx->pc = 0x3B2814u;
    // 0x3b2814: 0x0  nop
    ctx->pc = 0x3b2814u;
    // NOP
label_3b2818:
    // 0x3b2818: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x3b2818u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x3b281c: 0x24846710  addiu       $a0, $a0, 0x6710
    ctx->pc = 0x3b281cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26384));
    // 0x3b2820: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x3b2820u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3b2824: 0x27a6004c  addiu       $a2, $sp, 0x4C
    ctx->pc = 0x3b2824u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x3b2828: 0xc04ed64  jal         func_13B590
    ctx->pc = 0x3B2828u;
    SET_GPR_U32(ctx, 31, 0x3B2830u);
    ctx->pc = 0x3B282Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B2828u;
    // 0x3b282c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13B590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13B590u, 0x3B2828u, 0x3B2830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B2830u;
label_3b2830:
    // 0x3b2830: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3B2830u;
    {
        const bool branch_taken_0x3b2830 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b2830) {
            ctx->pc = 0x3B2848u;
            goto label_3b2848;
        }
    }
    ctx->pc = 0x3B2838u;
    // 0x3b2838: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x3b2838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b283c: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x3b283cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x3b2840: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x3B2840u;
    {
        const bool branch_taken_0x3b2840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B2844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2840u;
        // 0x3b2844: 0xe6000064  swc1        $f0, 0x64($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b2840) {
            ctx->pc = 0x3B2890u;
            goto label_3b2890;
        }
    }
    ctx->pc = 0x3B2848u;
label_3b2848:
    // 0x3b2848: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x3b2848u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x3b284c: 0x3c03459c  lui         $v1, 0x459C
    ctx->pc = 0x3b284cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17820 << 16));
    // 0x3b2850: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x3b2850u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x3b2854: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3b2854u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b2858: 0xc48128f0  lwc1        $f1, 0x28F0($a0)
    ctx->pc = 0x3b2858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 10480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3b285c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3b285cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3b2860: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x3B2860u;
    {
        const bool branch_taken_0x3b2860 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3b2860) {
            ctx->pc = 0x3B2880u;
            goto label_3b2880;
        }
    }
    ctx->pc = 0x3B2868u;
    // 0x3b2868: 0xc4800024  lwc1        $f0, 0x24($a0)
    ctx->pc = 0x3b2868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b286c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x3b286cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x3b2870: 0x4600a000  add.s       $f0, $f20, $f0
    ctx->pc = 0x3b2870u;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x3b2874: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3B2874u;
    {
        const bool branch_taken_0x3b2874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B2878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2874u;
        // 0x3b2878: 0xe6000064  swc1        $f0, 0x64($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b2874) {
            ctx->pc = 0x3B2890u;
            goto label_3b2890;
        }
    }
    ctx->pc = 0x3B287Cu;
    // 0x3b287c: 0x0  nop
    ctx->pc = 0x3b287cu;
    // NOP
label_3b2880:
    // 0x3b2880: 0xc4800024  lwc1        $f0, 0x24($a0)
    ctx->pc = 0x3b2880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b2884: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x3b2884u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x3b2888: 0xe6000064  swc1        $f0, 0x64($s0)
    ctx->pc = 0x3b2888u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
    // 0x3b288c: 0x0  nop
    ctx->pc = 0x3b288cu;
    // NOP
label_3b2890:
    // 0x3b2890: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3b2890u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3b2894: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3b2894u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b2898: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3b2898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3b289c: 0x3e00008  jr          $ra
    ctx->pc = 0x3B289Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B28A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B289Cu;
        // 0x3b28a0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B289Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B28A4u;
}
