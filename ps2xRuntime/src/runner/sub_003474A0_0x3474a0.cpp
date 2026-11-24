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

// Function: sub_003474A0
// Address: 0x3474a0 - 0x347530
void sub_003474A0_0x3474a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003474A0_0x3474a0");
#endif

    switch (ctx->pc) {
        case 0x3474c4u: goto label_3474c4;
        case 0x3474d8u: goto label_3474d8;
        case 0x3474f0u: goto label_3474f0;
        case 0x3474fcu: goto label_3474fc;
        case 0x347518u: goto label_347518;
        default: break;
    }

    ctx->pc = 0x3474a0u;

    // 0x3474a0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3474a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3474a4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3474a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3474a8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3474a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3474ac: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3474acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3474b0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3474b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3474b4: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x3474b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x3474b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3474b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3474bc: 0xc0d0a7c  jal         func_3429F0
    ctx->pc = 0x3474BCu;
    SET_GPR_U32(ctx, 31, 0x3474C4u);
    ctx->pc = 0x3474C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3474BCu;
    // 0x3474c0: 0x24844820  addiu       $a0, $a0, 0x4820 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3429F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3429F0u, 0x3474BCu, 0x3474C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3474C4u;
label_3474c4:
    // 0x3474c4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3474c4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3474c8: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x3474c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x3474cc: 0x44110000  mfc1        $s1, $f0
    ctx->pc = 0x3474ccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 17, bits); }
    // 0x3474d0: 0xc0d0a7c  jal         func_3429F0
    ctx->pc = 0x3474D0u;
    SET_GPR_U32(ctx, 31, 0x3474D8u);
    ctx->pc = 0x3474D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3474D0u;
    // 0x3474d4: 0x24844820  addiu       $a0, $a0, 0x4820 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3429F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3429F0u, 0x3474D0u, 0x3474D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3474D8u;
label_3474d8:
    // 0x3474d8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3474d8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3474dc: 0x3c050091  lui         $a1, 0x91
    ctx->pc = 0x3474dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)145 << 16));
    // 0x3474e0: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x3474e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3474e4: 0x44100000  mfc1        $s0, $f0
    ctx->pc = 0x3474e4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
    // 0x3474e8: 0xc0d0a84  jal         func_342A10
    ctx->pc = 0x3474E8u;
    SET_GPR_U32(ctx, 31, 0x3474F0u);
    ctx->pc = 0x3474ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3474E8u;
    // 0x3474ec: 0x24a54820  addiu       $a1, $a1, 0x4820 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342A10u, 0x3474E8u, 0x3474F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3474F0u;
label_3474f0:
    // 0x3474f0: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x3474f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x3474f4: 0xc0d0a7c  jal         func_3429F0
    ctx->pc = 0x3474F4u;
    SET_GPR_U32(ctx, 31, 0x3474FCu);
    ctx->pc = 0x3474F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3474F4u;
    // 0x3474f8: 0x24844820  addiu       $a0, $a0, 0x4820 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3429F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3429F0u, 0x3474F4u, 0x3474FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3474FCu;
label_3474fc:
    // 0x3474fc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3474fcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x347500: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x347500u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347504: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x347504u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347508: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x347508u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34750c: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x34750cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x347510: 0xc0d1eb0  jal         func_347AC0
    ctx->pc = 0x347510u;
    SET_GPR_U32(ctx, 31, 0x347518u);
    ctx->pc = 0x347514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347510u;
    // 0x347514: 0x27a60040  addiu       $a2, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x347AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x347AC0u, 0x347510u, 0x347518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347518u;
label_347518:
    // 0x347518: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x347518u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x34751c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x34751cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x347520: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x347520u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x347524: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x347524u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x347528: 0x3e00008  jr          $ra
    ctx->pc = 0x347528u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34752Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347528u;
        // 0x34752c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x347528u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x347530u;
}
