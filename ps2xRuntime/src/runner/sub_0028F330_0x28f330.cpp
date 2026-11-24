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

// Function: sub_0028F330
// Address: 0x28f330 - 0x28f3f8
void sub_0028F330_0x28f330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028F330_0x28f330");
#endif

    switch (ctx->pc) {
        case 0x28f358u: goto label_28f358;
        case 0x28f3dcu: goto label_28f3dc;
        default: break;
    }

    ctx->pc = 0x28f330u;

    // 0x28f330: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x28f330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x28f334: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x28f334u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x28f338: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x28f338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x28f33c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x28f33cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x28f340: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x28f340u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x28f344: 0x3c110029  lui         $s1, 0x29
    ctx->pc = 0x28f344u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)41 << 16));
    // 0x28f348: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x28f348u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f34c: 0x2631f300  addiu       $s1, $s1, -0xD00
    ctx->pc = 0x28f34cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294963968));
    // 0x28f350: 0xc099b04  jal         func_266C10
    ctx->pc = 0x28F350u;
    SET_GPR_U32(ctx, 31, 0x28F358u);
    ctx->pc = 0x28F354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F350u;
    // 0x28f354: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x266C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x266C10u, 0x28F350u, 0x28F358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F358u;
label_28f358:
    // 0x28f358: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x28F358u;
    {
        const bool branch_taken_0x28f358 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28f358) {
            ctx->pc = 0x28F3E0u;
            goto label_28f3e0;
        }
    }
    ctx->pc = 0x28F360u;
    // 0x28f360: 0xc6020014  lwc1        $f2, 0x14($s0)
    ctx->pc = 0x28f360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28f364: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x28f364u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f368: 0x3c024500  lui         $v0, 0x4500
    ctx->pc = 0x28f368u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17664 << 16));
    // 0x28f36c: 0x220582d  daddu       $t3, $s1, $zero
    ctx->pc = 0x28f36cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f370: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x28f370u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28f374: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x28f374u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f378: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x28f378u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f37c: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x28f37cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
    // 0x28f380: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28f380u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28f384: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x28f384u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x28f388: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x28f388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x28f38c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x28f38cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x28f390: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x28f390u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x28f394: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x28f394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x28f398: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x28f398u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x28f39c: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x28f39cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x28f3a0: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x28f3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x28f3a4: 0xffa20010  sd          $v0, 0x10($sp)
    ctx->pc = 0x28f3a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
    // 0x28f3a8: 0xffa00018  sd          $zero, 0x18($sp)
    ctx->pc = 0x28f3a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 0));
    // 0x28f3ac: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x28f3acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x28f3b0: 0x8e070018  lw          $a3, 0x18($s0)
    ctx->pc = 0x28f3b0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x28f3b4: 0x8e08001c  lw          $t0, 0x1C($s0)
    ctx->pc = 0x28f3b4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x28f3b8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x28f3b8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x28f3bc: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x28f3bcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x28f3c0: 0x0  nop
    ctx->pc = 0x28f3c0u;
    // NOP
    // 0x28f3c4: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x28f3c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x28f3c8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x28f3c8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x28f3cc: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x28f3ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x28f3d0: 0x2543c  dsll32      $t2, $v0, 16
    ctx->pc = 0x28f3d0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) << (32 + 16));
    // 0x28f3d4: 0xc0ab5b8  jal         func_2AD6E0
    ctx->pc = 0x28F3D4u;
    SET_GPR_U32(ctx, 31, 0x28F3DCu);
    ctx->pc = 0x28F3D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F3D4u;
    // 0x28f3d8: 0xa543f  dsra32      $t2, $t2, 16 (Delay Slot)
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 10) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AD6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AD6E0u, 0x28F3D4u, 0x28F3DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F3DCu;
label_28f3dc:
    // 0x28f3dc: 0x0  nop
    ctx->pc = 0x28f3dcu;
    // NOP
label_28f3e0:
    // 0x28f3e0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x28f3e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x28f3e4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x28f3e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28f3e8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x28f3e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f3ec: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x28f3ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28f3f0: 0x3e00008  jr          $ra
    ctx->pc = 0x28F3F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28F3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F3F0u;
        // 0x28f3f4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28F3F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28F3F8u;
}
