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

// Function: sub_003473D0
// Address: 0x3473d0 - 0x347460
void sub_003473D0_0x3473d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003473D0_0x3473d0");
#endif

    switch (ctx->pc) {
        case 0x3473f4u: goto label_3473f4;
        case 0x347408u: goto label_347408;
        case 0x347420u: goto label_347420;
        case 0x347430u: goto label_347430;
        case 0x347448u: goto label_347448;
        default: break;
    }

    ctx->pc = 0x3473d0u;

    // 0x3473d0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3473d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x3473d4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3473d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3473d8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3473d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3473dc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3473dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3473e0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3473e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3473e4: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x3473e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x3473e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3473e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3473ec: 0xc0d0a7c  jal         func_3429F0
    ctx->pc = 0x3473ECu;
    SET_GPR_U32(ctx, 31, 0x3473F4u);
    ctx->pc = 0x3473F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3473ECu;
    // 0x3473f0: 0x24844820  addiu       $a0, $a0, 0x4820 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3429F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3429F0u, 0x3473ECu, 0x3473F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3473F4u;
label_3473f4:
    // 0x3473f4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3473f4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3473f8: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x3473f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x3473fc: 0x44110000  mfc1        $s1, $f0
    ctx->pc = 0x3473fcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 17, bits); }
    // 0x347400: 0xc0d0a7c  jal         func_3429F0
    ctx->pc = 0x347400u;
    SET_GPR_U32(ctx, 31, 0x347408u);
    ctx->pc = 0x347404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347400u;
    // 0x347404: 0x24844820  addiu       $a0, $a0, 0x4820 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3429F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3429F0u, 0x347400u, 0x347408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347408u;
label_347408:
    // 0x347408: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x347408u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x34740c: 0x3c050091  lui         $a1, 0x91
    ctx->pc = 0x34740cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)145 << 16));
    // 0x347410: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x347410u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x347414: 0x44100000  mfc1        $s0, $f0
    ctx->pc = 0x347414u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
    // 0x347418: 0xc0d0a84  jal         func_342A10
    ctx->pc = 0x347418u;
    SET_GPR_U32(ctx, 31, 0x347420u);
    ctx->pc = 0x34741Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347418u;
    // 0x34741c: 0x24a54820  addiu       $a1, $a1, 0x4820 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342A10u, 0x347418u, 0x347420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347420u;
label_347420:
    // 0x347420: 0x3c050091  lui         $a1, 0x91
    ctx->pc = 0x347420u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)145 << 16));
    // 0x347424: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x347424u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x347428: 0xc0d0a84  jal         func_342A10
    ctx->pc = 0x347428u;
    SET_GPR_U32(ctx, 31, 0x347430u);
    ctx->pc = 0x34742Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347428u;
    // 0x34742c: 0x24a54820  addiu       $a1, $a1, 0x4820 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342A10u, 0x347428u, 0x347430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347430u;
label_347430:
    // 0x347430: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x347430u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347434: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x347434u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347438: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x347438u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34743c: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x34743cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x347440: 0xc0d1e54  jal         func_347950
    ctx->pc = 0x347440u;
    SET_GPR_U32(ctx, 31, 0x347448u);
    ctx->pc = 0x347444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347440u;
    // 0x347444: 0x27a60050  addiu       $a2, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x347950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x347950u, 0x347440u, 0x347448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347448u;
label_347448:
    // 0x347448: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x347448u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x34744c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x34744cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x347450: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x347450u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x347454: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x347454u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x347458: 0x3e00008  jr          $ra
    ctx->pc = 0x347458u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34745Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347458u;
        // 0x34745c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x347458u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x347460u;
}
