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

// Function: sub_0038B350
// Address: 0x38b350 - 0x38b41c
void sub_0038B350_0x38b350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038B350_0x38b350");
#endif

    switch (ctx->pc) {
        case 0x38b380u: goto label_38b380;
        case 0x38b390u: goto label_38b390;
        default: break;
    }

    ctx->pc = 0x38b350u;

    // 0x38b350: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x38b350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x38b354: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x38b354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x38b358: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x38b358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x38b35c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x38b35cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x38b360: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x38b360u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38b364: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x38b364u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x38b368: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x38b368u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38b36c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x38b36cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x38b370: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x38b370u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38b374: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x38b374u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x38b378: 0xc0e2cc8  jal         func_38B320
    ctx->pc = 0x38B378u;
    SET_GPR_U32(ctx, 31, 0x38B380u);
    ctx->pc = 0x38B37Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38B378u;
    // 0x38b37c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38B320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38B320u, 0x38B378u, 0x38B380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38B380u;
label_38b380:
    // 0x38b380: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x38b380u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38b384: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x38b384u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38b388: 0xc0e2cc8  jal         func_38B320
    ctx->pc = 0x38B388u;
    SET_GPR_U32(ctx, 31, 0x38B390u);
    ctx->pc = 0x38B38Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38B388u;
    // 0x38b38c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38B320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38B320u, 0x38B388u, 0x38B390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38B390u;
label_38b390:
    // 0x38b390: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x38b390u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38b394: 0x211082a  slt         $at, $s0, $s1
    ctx->pc = 0x38b394u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x38b398: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x38B398u;
    {
        const bool branch_taken_0x38b398 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x38b398) {
            ctx->pc = 0x38B3B8u;
            goto label_38b3b8;
        }
    }
    ctx->pc = 0x38B3A0u;
    // 0x38b3a0: 0x2301023  subu        $v0, $s1, $s0
    ctx->pc = 0x38b3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x38b3a4: 0x28410801  slti        $at, $v0, 0x801
    ctx->pc = 0x38b3a4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2049) ? 1 : 0);
    // 0x38b3a8: 0x14200009  bnez        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x38B3A8u;
    {
        const bool branch_taken_0x38b3a8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x38b3a8) {
            ctx->pc = 0x38B3D0u;
            goto label_38b3d0;
        }
    }
    ctx->pc = 0x38B3B0u;
    // 0x38b3b0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x38B3B0u;
    {
        const bool branch_taken_0x38b3b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38B3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B3B0u;
        // 0x38b3b4: 0x26101000  addiu       $s0, $s0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38b3b0) {
            ctx->pc = 0x38B3D0u;
            goto label_38b3d0;
        }
    }
    ctx->pc = 0x38B3B8u;
label_38b3b8:
    // 0x38b3b8: 0x2111023  subu        $v0, $s0, $s1
    ctx->pc = 0x38b3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x38b3bc: 0x28410801  slti        $at, $v0, 0x801
    ctx->pc = 0x38b3bcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2049) ? 1 : 0);
    // 0x38b3c0: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x38B3C0u;
    {
        const bool branch_taken_0x38b3c0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x38b3c0) {
            ctx->pc = 0x38B3D0u;
            goto label_38b3d0;
        }
    }
    ctx->pc = 0x38B3C8u;
    // 0x38b3c8: 0x26311000  addiu       $s1, $s1, 0x1000
    ctx->pc = 0x38b3c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4096));
    // 0x38b3cc: 0x0  nop
    ctx->pc = 0x38b3ccu;
    // NOP
label_38b3d0:
    // 0x38b3d0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x38b3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x38b3d4: 0x44900800  mtc1        $s0, $f1
    ctx->pc = 0x38b3d4u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x38b3d8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x38b3d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x38b3dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x38b3dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x38b3e0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x38b3e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x38b3e4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x38b3e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x38b3e8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x38b3e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38b3ec: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x38b3ecu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x38b3f0: 0x4600081a  mula.s      $f1, $f0
    ctx->pc = 0x38b3f0u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[1], ctx->f[0]));
    // 0x38b3f4: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x38b3f4u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x38b3f8: 0x0  nop
    ctx->pc = 0x38b3f8u;
    // NOP
    // 0x38b3fc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x38b3fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x38b400: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x38b400u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x38b404: 0x4614001c  madd.s      $f0, $f0, $f20
    ctx->pc = 0x38b404u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[20]));
    // 0x38b408: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x38b408u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x38b40c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x38b40cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x38b410: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x38b410u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x38b414: 0x3e00008  jr          $ra
    ctx->pc = 0x38B414u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38B418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B414u;
        // 0x38b418: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38B414u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38B41Cu;
}
