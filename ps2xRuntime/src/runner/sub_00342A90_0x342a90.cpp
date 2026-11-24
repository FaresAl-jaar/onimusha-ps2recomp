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

// Function: sub_00342A90
// Address: 0x342a90 - 0x342b08
void sub_00342A90_0x342a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00342A90_0x342a90");
#endif

    switch (ctx->pc) {
        case 0x342ab8u: goto label_342ab8;
        case 0x342accu: goto label_342acc;
        case 0x342ae0u: goto label_342ae0;
        case 0x342af4u: goto label_342af4;
        default: break;
    }

    ctx->pc = 0x342a90u;

    // 0x342a90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x342a90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x342a94: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x342a94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x342a98: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x342a98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x342a9c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x342a9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x342aa0: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x342aa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x342aa4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x342aa4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x342aa8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x342aa8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x342aac: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x342aacu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x342ab0: 0xc0d0a70  jal         func_3429C0
    ctx->pc = 0x342AB0u;
    SET_GPR_U32(ctx, 31, 0x342AB8u);
    ctx->pc = 0x342AB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342AB0u;
    // 0x342ab4: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3429C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3429C0u, 0x342AB0u, 0x342AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342AB8u;
label_342ab8:
    // 0x342ab8: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x342ab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x342abc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x342abcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x342ac0: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x342ac0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x342ac4: 0xc0d0a70  jal         func_3429C0
    ctx->pc = 0x342AC4u;
    SET_GPR_U32(ctx, 31, 0x342ACCu);
    ctx->pc = 0x342AC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342AC4u;
    // 0x342ac8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3429C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3429C0u, 0x342AC4u, 0x342ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342ACCu;
label_342acc:
    // 0x342acc: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x342accu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x342ad0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x342ad0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x342ad4: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x342ad4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x342ad8: 0xc0d0a70  jal         func_3429C0
    ctx->pc = 0x342AD8u;
    SET_GPR_U32(ctx, 31, 0x342AE0u);
    ctx->pc = 0x342ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342AD8u;
    // 0x342adc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3429C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3429C0u, 0x342AD8u, 0x342AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342AE0u;
label_342ae0:
    // 0x342ae0: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x342ae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x342ae4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x342ae4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x342ae8: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x342ae8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x342aec: 0xc0d0a70  jal         func_3429C0
    ctx->pc = 0x342AECu;
    SET_GPR_U32(ctx, 31, 0x342AF4u);
    ctx->pc = 0x342AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342AECu;
    // 0x342af0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3429C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3429C0u, 0x342AECu, 0x342AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342AF4u;
label_342af4:
    // 0x342af4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x342af4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x342af8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x342af8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x342afc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x342afcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x342b00: 0x3e00008  jr          $ra
    ctx->pc = 0x342B00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x342B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342B00u;
        // 0x342b04: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x342B00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x342B08u;
}
