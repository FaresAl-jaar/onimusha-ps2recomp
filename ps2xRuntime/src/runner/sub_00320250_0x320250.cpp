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

// Function: sub_00320250
// Address: 0x320250 - 0x320304
void sub_00320250_0x320250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00320250_0x320250");
#endif

    switch (ctx->pc) {
        case 0x3202b8u: goto label_3202b8;
        case 0x3202d0u: goto label_3202d0;
        default: break;
    }

    ctx->pc = 0x320250u;

    // 0x320250: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x320250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x320254: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x320254u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x320258: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x320258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x32025c: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x32025cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x320260: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x320260u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x320264: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x320264u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x320268: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x320268u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x32026c: 0xc4a40000  lwc1        $f4, 0x0($a1)
    ctx->pc = 0x32026cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x320270: 0xc4a30004  lwc1        $f3, 0x4($a1)
    ctx->pc = 0x320270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x320274: 0xc4a20008  lwc1        $f2, 0x8($a1)
    ctx->pc = 0x320274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x320278: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x320278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x32027c: 0xe4640000  swc1        $f4, 0x0($v1)
    ctx->pc = 0x32027cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x320280: 0xe4630004  swc1        $f3, 0x4($v1)
    ctx->pc = 0x320280u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x320284: 0xe4620008  swc1        $f2, 0x8($v1)
    ctx->pc = 0x320284u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x320288: 0xe461000c  swc1        $f1, 0xC($v1)
    ctx->pc = 0x320288u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x32028c: 0xc4820014  lwc1        $f2, 0x14($a0)
    ctx->pc = 0x32028cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x320290: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x320290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x320294: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x320294u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x320298: 0x46000845  abs.s       $f1, $f1
    ctx->pc = 0x320298u;
    ctx->f[1] = FPU_ABS_S(ctx->f[1]);
    // 0x32029c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x32029cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3202a0: 0x45000011  bc1f        . + 4 + (0x11 << 2)
    ctx->pc = 0x3202A0u;
    {
        const bool branch_taken_0x3202a0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3202A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3202A0u;
        // 0x3202a4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3202a0) {
            ctx->pc = 0x3202E8u;
            goto label_3202e8;
        }
    }
    ctx->pc = 0x3202A8u;
    // 0x3202a8: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x3202a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3202ac: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x3202acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3202b0: 0xc0414d0  jal         func_105340
    ctx->pc = 0x3202B0u;
    SET_GPR_U32(ctx, 31, 0x3202B8u);
    ctx->pc = 0x3202B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3202B0u;
    // 0x3202b4: 0x26060010  addiu       $a2, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x3202B0u, 0x3202B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3202B8u;
label_3202b8:
    // 0x3202b8: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x3202b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3202bc: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x3202bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3202c0: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x3202c0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3202c4: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x3202c4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x3202c8: 0xc07cd48  jal         func_1F3520
    ctx->pc = 0x3202C8u;
    SET_GPR_U32(ctx, 31, 0x3202D0u);
    ctx->pc = 0x3202CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3202C8u;
    // 0x3202cc: 0xc6140020  lwc1        $f20, 0x20($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3520u, 0x3202C8u, 0x3202D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3202D0u;
label_3202d0:
    // 0x3202d0: 0x4614a042  mul.s       $f1, $f20, $f20
    ctx->pc = 0x3202d0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
    // 0x3202d4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3202d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3202d8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x3202D8u;
    {
        const bool branch_taken_0x3202d8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3202DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3202D8u;
        // 0x3202dc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3202d8) {
            ctx->pc = 0x3202E8u;
            goto label_3202e8;
        }
    }
    ctx->pc = 0x3202E0u;
    // 0x3202e0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3202E0u;
    {
        const bool branch_taken_0x3202e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3202e0) {
            ctx->pc = 0x3202F0u;
            goto label_3202f0;
        }
    }
    ctx->pc = 0x3202E8u;
label_3202e8:
    // 0x3202e8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3202e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3202ec: 0x0  nop
    ctx->pc = 0x3202ecu;
    // NOP
label_3202f0:
    // 0x3202f0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3202f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3202f4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3202f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3202f8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3202f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3202fc: 0x3e00008  jr          $ra
    ctx->pc = 0x3202FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x320300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3202FCu;
        // 0x320300: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3202FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x320304u;
}
