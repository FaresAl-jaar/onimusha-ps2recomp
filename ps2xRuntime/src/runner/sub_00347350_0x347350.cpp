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

// Function: sub_00347350
// Address: 0x347350 - 0x3473cc
void sub_00347350_0x347350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00347350_0x347350");
#endif

    switch (ctx->pc) {
        case 0x347374u: goto label_347374;
        case 0x347388u: goto label_347388;
        case 0x3473a0u: goto label_3473a0;
        case 0x3473b4u: goto label_3473b4;
        default: break;
    }

    ctx->pc = 0x347350u;

    // 0x347350: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x347350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x347354: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x347354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x347358: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x347358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x34735c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x34735cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347360: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x347360u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x347364: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x347364u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x347368: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x347368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x34736c: 0xc0d0a7c  jal         func_3429F0
    ctx->pc = 0x34736Cu;
    SET_GPR_U32(ctx, 31, 0x347374u);
    ctx->pc = 0x347370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34736Cu;
    // 0x347370: 0x24844820  addiu       $a0, $a0, 0x4820 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3429F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3429F0u, 0x34736Cu, 0x347374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347374u;
label_347374:
    // 0x347374: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x347374u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x347378: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x347378u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x34737c: 0x44110000  mfc1        $s1, $f0
    ctx->pc = 0x34737cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 17, bits); }
    // 0x347380: 0xc0d0a7c  jal         func_3429F0
    ctx->pc = 0x347380u;
    SET_GPR_U32(ctx, 31, 0x347388u);
    ctx->pc = 0x347384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347380u;
    // 0x347384: 0x24844820  addiu       $a0, $a0, 0x4820 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3429F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3429F0u, 0x347380u, 0x347388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347388u;
label_347388:
    // 0x347388: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x347388u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x34738c: 0x3c050091  lui         $a1, 0x91
    ctx->pc = 0x34738cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)145 << 16));
    // 0x347390: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x347390u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x347394: 0x44100000  mfc1        $s0, $f0
    ctx->pc = 0x347394u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
    // 0x347398: 0xc0d0a84  jal         func_342A10
    ctx->pc = 0x347398u;
    SET_GPR_U32(ctx, 31, 0x3473A0u);
    ctx->pc = 0x34739Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347398u;
    // 0x34739c: 0x24a54820  addiu       $a1, $a1, 0x4820 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342A10u, 0x347398u, 0x3473A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3473A0u;
label_3473a0:
    // 0x3473a0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3473a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3473a4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3473a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3473a8: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x3473a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3473ac: 0xc0d1e7c  jal         func_3479F0
    ctx->pc = 0x3473ACu;
    SET_GPR_U32(ctx, 31, 0x3473B4u);
    ctx->pc = 0x3473B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3473ACu;
    // 0x3473b0: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3479F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3479F0u, 0x3473ACu, 0x3473B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3473B4u;
label_3473b4:
    // 0x3473b4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3473b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3473b8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3473b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3473bc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3473bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3473c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3473c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3473c4: 0x3e00008  jr          $ra
    ctx->pc = 0x3473C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3473C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3473C4u;
        // 0x3473c8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3473C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3473CCu;
}
