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

// Function: sub_00194780
// Address: 0x194780 - 0x1948a8
void sub_00194780_0x194780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00194780_0x194780");
#endif

    switch (ctx->pc) {
        case 0x1947c0u: goto label_1947c0;
        case 0x1947e4u: goto label_1947e4;
        case 0x194844u: goto label_194844;
        case 0x194854u: goto label_194854;
        case 0x194868u: goto label_194868;
        default: break;
    }

    ctx->pc = 0x194780u;

    // 0x194780: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x194780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x194784: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x194784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x194788: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x194788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x19478c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x19478cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x194790: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x194790u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194794: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x194794u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x194798: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x194798u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19479c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x19479cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1947a0: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x1947a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1947a4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1947a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1947a8: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x1947a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1947ac: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1947acu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1947b0: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1947b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1947b4: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x1947b4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x1947b8: 0xc041494  jal         func_105250
    ctx->pc = 0x1947B8u;
    SET_GPR_U32(ctx, 31, 0x1947C0u);
    ctx->pc = 0x1947BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1947B8u;
    // 0x1947bc: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105250u, 0x1947B8u, 0x1947C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1947C0u;
label_1947c0:
    // 0x1947c0: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x1947c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1947c4: 0x7a030000  lq          $v1, 0x0($s0)
    ctx->pc = 0x1947c4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1947c8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1947c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1947cc: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1947ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1947d0: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x1947d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1947d4: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x1947d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1947d8: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x1947d8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x1947dc: 0xc041442  jal         func_105108
    ctx->pc = 0x1947DCu;
    SET_GPR_U32(ctx, 31, 0x1947E4u);
    ctx->pc = 0x1947E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1947DCu;
    // 0x1947e0: 0xe7a000bc  swc1        $f0, 0xBC($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x1947DCu, 0x1947E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1947E4u;
label_1947e4:
    // 0x1947e4: 0xc7a100b4  lwc1        $f1, 0xB4($sp)
    ctx->pc = 0x1947e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1947e8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1947e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1947ec: 0x0  nop
    ctx->pc = 0x1947ecu;
    // NOP
    // 0x1947f0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1947f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1947f4: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1947F4u;
    {
        const bool branch_taken_0x1947f4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1947F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1947F4u;
        // 0x1947f8: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1947f4) {
            ctx->pc = 0x194808u;
            goto label_194808;
        }
    }
    ctx->pc = 0x1947FCu;
    // 0x1947fc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1947FCu;
    {
        const bool branch_taken_0x1947fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1947fc) {
            ctx->pc = 0x194810u;
            goto label_194810;
        }
    }
    ctx->pc = 0x194804u;
    // 0x194804: 0x0  nop
    ctx->pc = 0x194804u;
    // NOP
label_194808:
    // 0x194808: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x194808u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19480c: 0x0  nop
    ctx->pc = 0x19480cu;
    // NOP
label_194810:
    // 0x194810: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x194810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x194814: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x194814u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x194818: 0x16420003  bne         $s2, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x194818u;
    {
        const bool branch_taken_0x194818 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x19481Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194818u;
        // 0x19481c: 0xafa000b4  sw          $zero, 0xB4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194818) {
            ctx->pc = 0x194828u;
            goto label_194828;
        }
    }
    ctx->pc = 0x194820u;
    // 0x194820: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x194820u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x194824: 0x0  nop
    ctx->pc = 0x194824u;
    // NOP
label_194828:
    // 0x194828: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x194828u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x19482c: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x19482cu;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x194830: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x194830u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194834: 0xafa000bc  sw          $zero, 0xBC($sp)
    ctx->pc = 0x194834u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 0));
    // 0x194838: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x194838u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x19483c: 0xc041472  jal         func_1051C8
    ctx->pc = 0x19483Cu;
    SET_GPR_U32(ctx, 31, 0x194844u);
    ctx->pc = 0x194840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19483Cu;
    // 0x194840: 0xe7a000b0  swc1        $f0, 0xB0($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051C8u, 0x19483Cu, 0x194844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194844u;
label_194844:
    // 0x194844: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x194844u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x194848: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x194848u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x19484c: 0xc0414dc  jal         func_105370
    ctx->pc = 0x19484Cu;
    SET_GPR_U32(ctx, 31, 0x194854u);
    ctx->pc = 0x194850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19484Cu;
    // 0x194850: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x19484Cu, 0x194854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194854u;
label_194854:
    // 0x194854: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x194854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x194858: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x194858u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19485c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x19485cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194860: 0xc041442  jal         func_105108
    ctx->pc = 0x194860u;
    SET_GPR_U32(ctx, 31, 0x194868u);
    ctx->pc = 0x194864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194860u;
    // 0x194864: 0xafa000bc  sw          $zero, 0xBC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x194860u, 0x194868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194868u;
label_194868:
    // 0x194868: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x194868u;
    {
        const bool branch_taken_0x194868 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x19486Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194868u;
        // 0x19486c: 0xafa000bc  sw          $zero, 0xBC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194868) {
            ctx->pc = 0x194880u;
            goto label_194880;
        }
    }
    ctx->pc = 0x194870u;
    // 0x194870: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x194870u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194874: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x194874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x194878: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x194878u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19487c: 0x7e820000  sq          $v0, 0x0($s4)
    ctx->pc = 0x19487cu;
    WRITE128(ADD32(GPR_U32(ctx, 20), 0), GPR_VEC(ctx, 2));
label_194880:
    // 0x194880: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x194880u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194884: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x194884u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x194888: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x194888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x19488c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x19488cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x194890: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x194890u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x194894: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x194894u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x194898: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x194898u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19489c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x19489cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1948a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1948A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1948A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1948A0u;
        // 0x1948a4: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1948A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1948A8u;
}
