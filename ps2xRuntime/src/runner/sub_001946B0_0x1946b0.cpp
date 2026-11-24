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

// Function: sub_001946B0
// Address: 0x1946b0 - 0x194780
void sub_001946B0_0x1946b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001946B0_0x1946b0");
#endif

    switch (ctx->pc) {
        case 0x1946e8u: goto label_1946e8;
        case 0x1946fcu: goto label_1946fc;
        case 0x194738u: goto label_194738;
        case 0x19475cu: goto label_19475c;
        default: break;
    }

    ctx->pc = 0x1946b0u;

    // 0x1946b0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1946b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1946b4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1946b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1946b8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1946b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1946bc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1946bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1946c0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1946c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1946c4: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x1946c4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1946c8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1946c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1946cc: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x1946ccu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1946d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1946d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1946d4: 0x46006586  mov.s       $f22, $f12
    ctx->pc = 0x1946d4u;
    ctx->f[22] = FPU_MOV_S(ctx->f[12]);
    // 0x1946d8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1946d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1946dc: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x1946dcu;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x1946e0: 0xc04d7c8  jal         func_135F20
    ctx->pc = 0x1946E0u;
    SET_GPR_U32(ctx, 31, 0x1946E8u);
    ctx->pc = 0x1946E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1946E0u;
    // 0x1946e4: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x135F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135F20u, 0x1946E0u, 0x1946E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1946E8u;
label_1946e8:
    // 0x1946e8: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1946e8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x1946ec: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1946ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1946f0: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1946f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1946f4: 0xc0414d0  jal         func_105340
    ctx->pc = 0x1946F4u;
    SET_GPR_U32(ctx, 31, 0x1946FCu);
    ctx->pc = 0x1946F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1946F4u;
    // 0x1946f8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x1946F4u, 0x1946FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1946FCu;
label_1946fc:
    // 0x1946fc: 0x0  nop
    ctx->pc = 0x1946fcu;
    // NOP
    // 0x194700: 0x0  nop
    ctx->pc = 0x194700u;
    // NOP
    // 0x194704: 0x4616a003  div.s       $f0, $f20, $f22
    ctx->pc = 0x194704u;
    { if (ctx->f[22] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[20], ctx->f[22]); }
    // 0x194708: 0x0  nop
    ctx->pc = 0x194708u;
    // NOP
    // 0x19470c: 0x0  nop
    ctx->pc = 0x19470cu;
    // NOP
    // 0x194710: 0x46150036  c.le.s      $f0, $f21
    ctx->pc = 0x194710u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x194714: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x194714u;
    {
        const bool branch_taken_0x194714 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x194714) {
            ctx->pc = 0x194720u;
            goto label_194720;
        }
    }
    ctx->pc = 0x19471Cu;
    // 0x19471c: 0x4600a806  mov.s       $f0, $f21
    ctx->pc = 0x19471cu;
    ctx->f[0] = FPU_MOV_S(ctx->f[21]);
label_194720:
    // 0x194720: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x194720u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x194724: 0x46140303  div.s       $f12, $f0, $f20
    ctx->pc = 0x194724u;
    { if (ctx->f[20] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[20]); }
    // 0x194728: 0x0  nop
    ctx->pc = 0x194728u;
    // NOP
    // 0x19472c: 0x0  nop
    ctx->pc = 0x19472cu;
    // NOP
    // 0x194730: 0xc0414dc  jal         func_105370
    ctx->pc = 0x194730u;
    SET_GPR_U32(ctx, 31, 0x194738u);
    ctx->pc = 0x194734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194730u;
    // 0x194734: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x194730u, 0x194738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194738u;
label_194738:
    // 0x194738: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x194738u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19473c: 0x0  nop
    ctx->pc = 0x19473cu;
    // NOP
    // 0x194740: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x194740u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x194744: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x194744u;
    {
        const bool branch_taken_0x194744 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x194748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194744u;
        // 0x194748: 0xafa0004c  sw          $zero, 0x4C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194744) {
            ctx->pc = 0x194760u;
            goto label_194760;
        }
    }
    ctx->pc = 0x19474Cu;
    // 0x19474c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19474cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194750: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x194750u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194754: 0xc0414ca  jal         func_105328
    ctx->pc = 0x194754u;
    SET_GPR_U32(ctx, 31, 0x19475Cu);
    ctx->pc = 0x194758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194754u;
    // 0x194758: 0x27a60040  addiu       $a2, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x194754u, 0x19475Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19475Cu;
label_19475c:
    // 0x19475c: 0x0  nop
    ctx->pc = 0x19475cu;
    // NOP
label_194760:
    // 0x194760: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x194760u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x194764: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x194764u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x194768: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x194768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x19476c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x19476cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x194770: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x194770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x194774: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x194774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x194778: 0x3e00008  jr          $ra
    ctx->pc = 0x194778u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19477Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194778u;
        // 0x19477c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x194778u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x194780u;
}
