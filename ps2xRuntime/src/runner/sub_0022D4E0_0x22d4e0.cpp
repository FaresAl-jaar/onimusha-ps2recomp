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

// Function: sub_0022D4E0
// Address: 0x22d4e0 - 0x22d63c
void sub_0022D4E0_0x22d4e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022D4E0_0x22d4e0");
#endif

    switch (ctx->pc) {
        case 0x22d540u: goto label_22d540;
        case 0x22d578u: goto label_22d578;
        case 0x22d594u: goto label_22d594;
        case 0x22d5d0u: goto label_22d5d0;
        default: break;
    }

    ctx->pc = 0x22d4e0u;

    // 0x22d4e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x22d4e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x22d4e4: 0xe7b60038  swc1        $f22, 0x38($sp)
    ctx->pc = 0x22d4e4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x22d4e8: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x22d4e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x22d4ec: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x22d4ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x22d4f0: 0xe7b40028  swc1        $f20, 0x28($sp)
    ctx->pc = 0x22d4f0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x22d4f4: 0x0  nop
    ctx->pc = 0x22d4f4u;
    // NOP
    // 0x22d4f8: 0x0  nop
    ctx->pc = 0x22d4f8u;
    // NOP
    // 0x22d4fc: 0x46160504  c1          0x160504
    ctx->pc = 0x22d4fcu;
    ctx->f[20] = FPU_SQRT_S(ctx->f[22]);
    // 0x22d500: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x22d500u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x22d504: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x22d504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x22d508: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x22d508u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d50c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x22d50cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x22d510: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x22d510u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d514: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x22d514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x22d518: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x22d518u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d51c: 0xe7b50030  swc1        $f21, 0x30($sp)
    ctx->pc = 0x22d51cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x22d520: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x22d520u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d524: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x22d524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x22d528: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x22d528u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x22d52c: 0x4614a032  c.eq.s      $f20, $f20
    ctx->pc = 0x22d52cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22d530: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x22D530u;
    {
        const bool branch_taken_0x22d530 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x22D534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D530u;
        // 0x22d534: 0x4600a546  mov.s       $f21, $f20 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d530) {
            ctx->pc = 0x22D544u;
            goto label_22d544;
        }
    }
    ctx->pc = 0x22D538u;
    // 0x22d538: 0xc047ba0  jal         func_11EE80
    ctx->pc = 0x22D538u;
    SET_GPR_U32(ctx, 31, 0x22D540u);
    ctx->pc = 0x11EE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EE80u, 0x22D538u, 0x22D540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D540u;
label_22d540:
    // 0x22d540: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x22d540u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_22d544:
    // 0x22d544: 0x44906000  mtc1        $s0, $f12
    ctx->pc = 0x22d544u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22d548: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x22d548u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x22d54c: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x22d54cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
    // 0x22d550: 0x34210fda  ori         $at, $at, 0xFDA
    ctx->pc = 0x22d550u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4058);
    // 0x22d554: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x22d554u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22d558: 0x44910800  mtc1        $s1, $f1
    ctx->pc = 0x22d558u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22d55c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x22d55cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x22d560: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x22d560u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x22d564: 0x0  nop
    ctx->pc = 0x22d564u;
    // NOP
    // 0x22d568: 0x0  nop
    ctx->pc = 0x22d568u;
    // NOP
    // 0x22d56c: 0x46016303  div.s       $f12, $f12, $f1
    ctx->pc = 0x22d56cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[12], ctx->f[1]); }
    // 0x22d570: 0xc047a98  jal         func_11EA60
    ctx->pc = 0x22D570u;
    SET_GPR_U32(ctx, 31, 0x22D578u);
    ctx->pc = 0x11EA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EA60u, 0x22D570u, 0x22D578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D578u;
label_22d578:
    // 0x22d578: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x22d578u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x22d57c: 0x4600a046  mov.s       $f1, $f20
    ctx->pc = 0x22d57cu;
    ctx->f[1] = FPU_MOV_S(ctx->f[20]);
    // 0x22d580: 0x46010832  c.eq.s      $f1, $f1
    ctx->pc = 0x22d580u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22d584: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x22D584u;
    {
        const bool branch_taken_0x22d584 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x22D588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D584u;
        // 0x22d588: 0x4600ad41  sub.s       $f21, $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d584) {
            ctx->pc = 0x22D598u;
            goto label_22d598;
        }
    }
    ctx->pc = 0x22D58Cu;
    // 0x22d58c: 0xc047ba0  jal         func_11EE80
    ctx->pc = 0x22D58Cu;
    SET_GPR_U32(ctx, 31, 0x22D594u);
    ctx->pc = 0x11EE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EE80u, 0x22D58Cu, 0x22D594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D594u;
label_22d594:
    // 0x22d594: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x22d594u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_22d598:
    // 0x22d598: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x22d598u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x22d59c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x22d59cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22d5a0: 0x46000d01  sub.s       $f20, $f1, $f0
    ctx->pc = 0x22d5a0u;
    ctx->f[20] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x22d5a4: 0x4614a801  sub.s       $f0, $f21, $f20
    ctx->pc = 0x22d5a4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[21], ctx->f[20]);
    // 0x22d5a8: 0x4614ab00  add.s       $f12, $f21, $f20
    ctx->pc = 0x22d5a8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[21], ctx->f[20]);
    // 0x22d5ac: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x22d5acu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x22d5b0: 0x0  nop
    ctx->pc = 0x22d5b0u;
    // NOP
    // 0x22d5b4: 0x0  nop
    ctx->pc = 0x22d5b4u;
    // NOP
    // 0x22d5b8: 0x460c0004  c1          0xC0004
    ctx->pc = 0x22d5b8u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[12]);
    // 0x22d5bc: 0x46000032  c.eq.s      $f0, $f0
    ctx->pc = 0x22d5bcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22d5c0: 0x45030004  bc1tl       . + 4 + (0x4 << 2)
    ctx->pc = 0x22D5C0u;
    {
        const bool branch_taken_0x22d5c0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22d5c0) {
            ctx->pc = 0x22D5C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22D5C0u;
            // 0x22d5c4: 0x4600a801  sub.s       $f0, $f21, $f0 (Delay Slot)
            ctx->f[0] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x22D5D4u;
            goto label_22d5d4;
        }
    }
    ctx->pc = 0x22D5C8u;
    // 0x22d5c8: 0xc047ba0  jal         func_11EE80
    ctx->pc = 0x22D5C8u;
    SET_GPR_U32(ctx, 31, 0x22D5D0u);
    ctx->pc = 0x11EE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EE80u, 0x22D5C8u, 0x22D5D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D5D0u;
label_22d5d0:
    // 0x22d5d0: 0x4600a801  sub.s       $f0, $f21, $f0
    ctx->pc = 0x22d5d0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
label_22d5d4:
    // 0x22d5d4: 0xc7b50030  lwc1        $f21, 0x30($sp)
    ctx->pc = 0x22d5d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x22d5d8: 0x3c014580  lui         $at, 0x4580
    ctx->pc = 0x22d5d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17792 << 16));
    // 0x22d5dc: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x22d5dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x22d5e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22d5e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22d5e4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x22d5e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x22d5e8: 0x0  nop
    ctx->pc = 0x22d5e8u;
    // NOP
    // 0x22d5ec: 0x0  nop
    ctx->pc = 0x22d5ecu;
    // NOP
    // 0x22d5f0: 0x46140003  div.s       $f0, $f0, $f20
    ctx->pc = 0x22d5f0u;
    { if (ctx->f[20] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[20]); }
    // 0x22d5f4: 0xc7b40028  lwc1        $f20, 0x28($sp)
    ctx->pc = 0x22d5f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x22d5f8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x22d5f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22d5fc: 0xc7b60038  lwc1        $f22, 0x38($sp)
    ctx->pc = 0x22d5fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x22d600: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x22d600u;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
    // 0x22d604: 0x46000080  add.s       $f2, $f0, $f0
    ctx->pc = 0x22d604u;
    ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x22d608: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x22d608u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x22d60c: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x22d60cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x22d610: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x22d610u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x22d614: 0x46001024  .word       0x46001024                   # cvt.w.s     $f0, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x22d614u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x22d618: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x22d618u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x22d61c: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x22d61cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x22d620: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x22d620u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x22d624: 0xa6620000  sh          $v0, 0x0($s3)
    ctx->pc = 0x22d624u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x22d628: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x22d628u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x22d62c: 0xa6430000  sh          $v1, 0x0($s2)
    ctx->pc = 0x22d62cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x22d630: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x22d630u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22d634: 0x3e00008  jr          $ra
    ctx->pc = 0x22D634u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22D638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D634u;
        // 0x22d638: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22D634u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22D63Cu;
}
