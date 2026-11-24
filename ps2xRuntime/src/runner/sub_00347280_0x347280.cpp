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

// Function: sub_00347280
// Address: 0x347280 - 0x347350
void sub_00347280_0x347280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00347280_0x347280");
#endif

    switch (ctx->pc) {
        case 0x3472acu: goto label_3472ac;
        case 0x3472c0u: goto label_3472c0;
        case 0x3472d8u: goto label_3472d8;
        case 0x3472e4u: goto label_3472e4;
        case 0x3472f8u: goto label_3472f8;
        case 0x34730cu: goto label_34730c;
        case 0x347330u: goto label_347330;
        default: break;
    }

    ctx->pc = 0x347280u;

    // 0x347280: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x347280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x347284: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x347284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x347288: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x347288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x34728c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x34728cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x347290: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x347290u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347294: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x347294u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x347298: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x347298u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x34729c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x34729cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3472a0: 0x24844820  addiu       $a0, $a0, 0x4820
    ctx->pc = 0x3472a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18464));
    // 0x3472a4: 0xc0d0a7c  jal         func_3429F0
    ctx->pc = 0x3472A4u;
    SET_GPR_U32(ctx, 31, 0x3472ACu);
    ctx->pc = 0x3472A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3472A4u;
    // 0x3472a8: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3429F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3429F0u, 0x3472A4u, 0x3472ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3472ACu;
label_3472ac:
    // 0x3472ac: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3472acu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3472b0: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x3472b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x3472b4: 0x44130000  mfc1        $s3, $f0
    ctx->pc = 0x3472b4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 19, bits); }
    // 0x3472b8: 0xc0d0a7c  jal         func_3429F0
    ctx->pc = 0x3472B8u;
    SET_GPR_U32(ctx, 31, 0x3472C0u);
    ctx->pc = 0x3472BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3472B8u;
    // 0x3472bc: 0x24844820  addiu       $a0, $a0, 0x4820 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3429F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3429F0u, 0x3472B8u, 0x3472C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3472C0u;
label_3472c0:
    // 0x3472c0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3472c0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3472c4: 0x3c050091  lui         $a1, 0x91
    ctx->pc = 0x3472c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)145 << 16));
    // 0x3472c8: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x3472c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3472cc: 0x44120000  mfc1        $s2, $f0
    ctx->pc = 0x3472ccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 18, bits); }
    // 0x3472d0: 0xc0d0a84  jal         func_342A10
    ctx->pc = 0x3472D0u;
    SET_GPR_U32(ctx, 31, 0x3472D8u);
    ctx->pc = 0x3472D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3472D0u;
    // 0x3472d4: 0x24a54820  addiu       $a1, $a1, 0x4820 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342A10u, 0x3472D0u, 0x3472D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3472D8u;
label_3472d8:
    // 0x3472d8: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x3472d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x3472dc: 0xc0d0a7c  jal         func_3429F0
    ctx->pc = 0x3472DCu;
    SET_GPR_U32(ctx, 31, 0x3472E4u);
    ctx->pc = 0x3472E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3472DCu;
    // 0x3472e0: 0x24844820  addiu       $a0, $a0, 0x4820 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3429F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3429F0u, 0x3472DCu, 0x3472E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3472E4u;
label_3472e4:
    // 0x3472e4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3472e4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3472e8: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x3472e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x3472ec: 0x44110000  mfc1        $s1, $f0
    ctx->pc = 0x3472ecu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 17, bits); }
    // 0x3472f0: 0xc0d0a7c  jal         func_3429F0
    ctx->pc = 0x3472F0u;
    SET_GPR_U32(ctx, 31, 0x3472F8u);
    ctx->pc = 0x3472F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3472F0u;
    // 0x3472f4: 0x24844820  addiu       $a0, $a0, 0x4820 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3429F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3429F0u, 0x3472F0u, 0x3472F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3472F8u;
label_3472f8:
    // 0x3472f8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3472f8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3472fc: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x3472fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x347300: 0x44100000  mfc1        $s0, $f0
    ctx->pc = 0x347300u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
    // 0x347304: 0xc0d0a7c  jal         func_3429F0
    ctx->pc = 0x347304u;
    SET_GPR_U32(ctx, 31, 0x34730Cu);
    ctx->pc = 0x347308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347304u;
    // 0x347308: 0x24844820  addiu       $a0, $a0, 0x4820 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3429F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3429F0u, 0x347304u, 0x34730Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34730Cu;
label_34730c:
    // 0x34730c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x34730cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x347310: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x347310u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347314: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x347314u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347318: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x347318u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34731c: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x34731cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347320: 0x260502d  daddu       $t2, $s3, $zero
    ctx->pc = 0x347320u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347324: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x347324u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x347328: 0xc0d1d6c  jal         func_3475B0
    ctx->pc = 0x347328u;
    SET_GPR_U32(ctx, 31, 0x347330u);
    ctx->pc = 0x34732Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347328u;
    // 0x34732c: 0x27a80060  addiu       $t0, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3475B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3475B0u, 0x347328u, 0x347330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347330u;
label_347330:
    // 0x347330: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x347330u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x347334: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x347334u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x347338: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x347338u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x34733c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x34733cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x347340: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x347340u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x347344: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x347344u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x347348: 0x3e00008  jr          $ra
    ctx->pc = 0x347348u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34734Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347348u;
        // 0x34734c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x347348u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x347350u;
}
