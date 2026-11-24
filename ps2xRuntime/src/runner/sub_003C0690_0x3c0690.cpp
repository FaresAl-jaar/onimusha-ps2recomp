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

// Function: sub_003C0690
// Address: 0x3c0690 - 0x3c0828
void sub_003C0690_0x3c0690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C0690_0x3c0690");
#endif

    switch (ctx->pc) {
        case 0x3c06c8u: goto label_3c06c8;
        case 0x3c06e8u: goto label_3c06e8;
        case 0x3c070cu: goto label_3c070c;
        case 0x3c073cu: goto label_3c073c;
        case 0x3c0780u: goto label_3c0780;
        case 0x3c07b0u: goto label_3c07b0;
        case 0x3c0808u: goto label_3c0808;
        default: break;
    }

    ctx->pc = 0x3c0690u;

    // 0x3c0690: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x3c0690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x3c0694: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3c0694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3c0698: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3c0698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3c069c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3c069cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3c06a0: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x3c06a0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x3c06a4: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x3c06a4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x3c06a8: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x3c06a8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3c06ac: 0x8c910008  lw          $s1, 0x8($a0)
    ctx->pc = 0x3c06acu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x3c06b0: 0x12200055  beqz        $s1, . + 4 + (0x55 << 2)
    ctx->pc = 0x3C06B0u;
    {
        const bool branch_taken_0x3c06b0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C06B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C06B0u;
        // 0x3c06b4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c06b0) {
            ctx->pc = 0x3C0808u;
            goto label_3c0808;
        }
    }
    ctx->pc = 0x3C06B8u;
    // 0x3c06b8: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x3c06b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x3c06bc: 0x26250040  addiu       $a1, $s1, 0x40
    ctx->pc = 0x3c06bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x3c06c0: 0xc041442  jal         func_105108
    ctx->pc = 0x3C06C0u;
    SET_GPR_U32(ctx, 31, 0x3C06C8u);
    ctx->pc = 0x3C06C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C06C0u;
    // 0x3c06c4: 0x26060010  addiu       $a2, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x3C06C0u, 0x3C06C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C06C8u;
label_3c06c8:
    // 0x3c06c8: 0xafa00074  sw          $zero, 0x74($sp)
    ctx->pc = 0x3c06c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
    // 0x3c06cc: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x3c06ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x3c06d0: 0xc6220094  lwc1        $f2, 0x94($s1)
    ctx->pc = 0x3c06d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3c06d4: 0xc6200098  lwc1        $f0, 0x98($s1)
    ctx->pc = 0x3c06d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c06d8: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x3c06d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3c06dc: 0x46020582  mul.s       $f22, $f0, $f2
    ctx->pc = 0x3c06dcu;
    ctx->f[22] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3c06e0: 0xc0968f0  jal         func_25A3C0
    ctx->pc = 0x3C06E0u;
    SET_GPR_U32(ctx, 31, 0x3C06E8u);
    ctx->pc = 0x3C06E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C06E0u;
    // 0x3c06e4: 0x46020d42  mul.s       $f21, $f1, $f2 (Delay Slot)
    ctx->f[21] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A3C0u, 0x3C06E0u, 0x3C06E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C06E8u;
label_3c06e8:
    // 0x3c06e8: 0x4600001a  mula.s      $f0, $f0
    ctx->pc = 0x3c06e8u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[0], ctx->f[0]));
    // 0x3c06ec: 0x27a30060  addiu       $v1, $sp, 0x60
    ctx->pc = 0x3c06ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3c06f0: 0x4616b01c  madd.s      $f0, $f22, $f22
    ctx->pc = 0x3c06f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[22], ctx->f[22]));
    // 0x3c06f4: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x3c06f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3c06f8: 0x46000504  c1          0x504
    ctx->pc = 0x3c06f8u;
    ctx->f[20] = FPU_SQRT_S(ctx->f[0]);
    // 0x3c06fc: 0x0  nop
    ctx->pc = 0x3c06fcu;
    // NOP
    // 0x3c0700: 0x0  nop
    ctx->pc = 0x3c0700u;
    // NOP
    // 0x3c0704: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x3C0704u;
    {
        const bool branch_taken_0x3c0704 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c0704) {
            ctx->pc = 0x3C0728u;
            goto label_3c0728;
        }
    }
    ctx->pc = 0x3C070Cu;
label_3c070c:
    // 0x3c070c: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x3c070cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3c0710: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3c0710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3c0714: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3c0714u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3c0718: 0x0  nop
    ctx->pc = 0x3c0718u;
    // NOP
    // 0x3c071c: 0x0  nop
    ctx->pc = 0x3c071cu;
    // NOP
    // 0x3c0720: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3C0720u;
    {
        const bool branch_taken_0x3c0720 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c0720) {
            ctx->pc = 0x3C070Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c070c;
        }
    }
    ctx->pc = 0x3C0728u;
label_3c0728:
    // 0x3c0728: 0x4600b007  neg.s       $f0, $f22
    ctx->pc = 0x3c0728u;
    ctx->f[0] = FPU_NEG_S(ctx->f[22]);
    // 0x3c072c: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x3c072cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3c0730: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x3c0730u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x3c0734: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x3C0734u;
    {
        const bool branch_taken_0x3c0734 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C0738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0734u;
        // 0x3c0738: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c0734) {
            ctx->pc = 0x3C0758u;
            goto label_3c0758;
        }
    }
    ctx->pc = 0x3C073Cu;
label_3c073c:
    // 0x3c073c: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x3c073cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3c0740: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3c0740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3c0744: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3c0744u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3c0748: 0x0  nop
    ctx->pc = 0x3c0748u;
    // NOP
    // 0x3c074c: 0x0  nop
    ctx->pc = 0x3c074cu;
    // NOP
    // 0x3c0750: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3C0750u;
    {
        const bool branch_taken_0x3c0750 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c0750) {
            ctx->pc = 0x3C073Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c073c;
        }
    }
    ctx->pc = 0x3C0758u;
label_3c0758:
    // 0x3c0758: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x3c0758u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x3c075c: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x3c075cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3c0760: 0xc7a10070  lwc1        $f1, 0x70($sp)
    ctx->pc = 0x3c0760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3c0764: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x3c0764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3c0768: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x3c0768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c076c: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x3c076cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x3c0770: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x3c0770u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x3c0774: 0xe7a10050  swc1        $f1, 0x50($sp)
    ctx->pc = 0x3c0774u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x3c0778: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x3C0778u;
    {
        const bool branch_taken_0x3c0778 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C077Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0778u;
        // 0x3c077c: 0xe7a00058  swc1        $f0, 0x58($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c0778) {
            ctx->pc = 0x3C079Cu;
            goto label_3c079c;
        }
    }
    ctx->pc = 0x3C0780u;
label_3c0780:
    // 0x3c0780: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x3c0780u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3c0784: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3c0784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3c0788: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3c0788u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3c078c: 0x0  nop
    ctx->pc = 0x3c078cu;
    // NOP
    // 0x3c0790: 0x0  nop
    ctx->pc = 0x3c0790u;
    // NOP
    // 0x3c0794: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3C0794u;
    {
        const bool branch_taken_0x3c0794 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c0794) {
            ctx->pc = 0x3C0780u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c0780;
        }
    }
    ctx->pc = 0x3C079Cu;
label_3c079c:
    // 0x3c079c: 0x4600a807  neg.s       $f0, $f21
    ctx->pc = 0x3c079cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[21]);
    // 0x3c07a0: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x3c07a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3c07a4: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x3c07a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x3c07a8: 0xc041468  jal         func_1051A0
    ctx->pc = 0x3C07A8u;
    SET_GPR_U32(ctx, 31, 0x3C07B0u);
    ctx->pc = 0x3C07ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C07A8u;
    // 0x3c07ac: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051A0u, 0x3C07A8u, 0x3C07B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C07B0u;
label_3c07b0:
    // 0x3c07b0: 0x4615a082  mul.s       $f2, $f20, $f21
    ctx->pc = 0x3c07b0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[20], ctx->f[21]);
    // 0x3c07b4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3c07b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3c07b8: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x3c07b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x3c07bc: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x3c07bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3c07c0: 0x460200c3  div.s       $f3, $f0, $f2
    ctx->pc = 0x3c07c0u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x3c07c4: 0x46031802  mul.s       $f0, $f3, $f3
    ctx->pc = 0x3c07c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x3c07c8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3c07c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3c07cc: 0x46151882  mul.s       $f2, $f3, $f21
    ctx->pc = 0x3c07ccu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[21]);
    // 0x3c07d0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x3c07d0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3c07d4: 0x46000004  c1          0x4
    ctx->pc = 0x3c07d4u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x3c07d8: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3c07d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3c07dc: 0x4600001a  mula.s      $f0, $f0
    ctx->pc = 0x3c07dcu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[0], ctx->f[0]));
    // 0x3c07e0: 0x46021802  mul.s       $f0, $f3, $f2
    ctx->pc = 0x3c07e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x3c07e4: 0x4600001c  madd.s      $f0, $f0, $f0
    ctx->pc = 0x3c07e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[0]));
    // 0x3c07e8: 0x46000004  c1          0x4
    ctx->pc = 0x3c07e8u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x3c07ec: 0x0  nop
    ctx->pc = 0x3c07ecu;
    // NOP
    // 0x3c07f0: 0x0  nop
    ctx->pc = 0x3c07f0u;
    // NOP
    // 0x3c07f4: 0x46140303  div.s       $f12, $f0, $f20
    ctx->pc = 0x3c07f4u;
    { if (ctx->f[20] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[20]); }
    // 0x3c07f8: 0x0  nop
    ctx->pc = 0x3c07f8u;
    // NOP
    // 0x3c07fc: 0x0  nop
    ctx->pc = 0x3c07fcu;
    // NOP
    // 0x3c0800: 0xc0414dc  jal         func_105370
    ctx->pc = 0x3C0800u;
    SET_GPR_U32(ctx, 31, 0x3C0808u);
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x3C0800u, 0x3C0808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C0808u;
label_3c0808:
    // 0x3c0808: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3c0808u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3c080c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3c080cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3c0810: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x3c0810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x3c0814: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3c0814u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3c0818: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x3c0818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x3c081c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3c081cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3c0820: 0x3e00008  jr          $ra
    ctx->pc = 0x3C0820u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C0824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0820u;
        // 0x3c0824: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C0820u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C0828u;
}
