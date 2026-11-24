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

// Function: sub_00186F60
// Address: 0x186f60 - 0x187020
void sub_00186F60_0x186f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00186F60_0x186f60");
#endif

    switch (ctx->pc) {
        case 0x186f78u: goto label_186f78;
        default: break;
    }

    ctx->pc = 0x186f60u;

    // 0x186f60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x186f60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x186f64: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x186f64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x186f68: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x186f68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x186f6c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x186f6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186f70: 0xc060d40  jal         func_183500
    ctx->pc = 0x186F70u;
    SET_GPR_U32(ctx, 31, 0x186F78u);
    ctx->pc = 0x186F74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186F70u;
    // 0x186f74: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x183500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x183500u, 0x186F70u, 0x186F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186F78u;
label_186f78:
    // 0x186f78: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x186F78u;
    {
        const bool branch_taken_0x186f78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x186F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186F78u;
        // 0x186f7c: 0x3c034270  lui         $v1, 0x4270 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17008 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186f78) {
            ctx->pc = 0x187010u;
            goto label_187010;
        }
    }
    ctx->pc = 0x186F80u;
    // 0x186f80: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x186f80u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x186f84: 0x6000004  bltz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x186F84u;
    {
        const bool branch_taken_0x186f84 = (GPR_S64(ctx, 16) < 0);
        ctx->pc = 0x186F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186F84u;
        // 0x186f88: 0x102042  srl         $a0, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186f84) {
            ctx->pc = 0x186F98u;
            goto label_186f98;
        }
    }
    ctx->pc = 0x186F8Cu;
    // 0x186f8c: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x186f8cu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x186f90: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x186F90u;
    {
        const bool branch_taken_0x186f90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186F90u;
        // 0x186f94: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x186f90) {
            ctx->pc = 0x186FB0u;
            goto label_186fb0;
        }
    }
    ctx->pc = 0x186F98u;
label_186f98:
    // 0x186f98: 0x32030001  andi        $v1, $s0, 0x1
    ctx->pc = 0x186f98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x186f9c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x186f9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x186fa0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x186fa0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x186fa4: 0x0  nop
    ctx->pc = 0x186fa4u;
    // NOP
    // 0x186fa8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x186fa8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x186fac: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x186facu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_186fb0:
    // 0x186fb0: 0x460008c2  mul.s       $f3, $f1, $f0
    ctx->pc = 0x186fb0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x186fb4: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x186fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x186fb8: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x186fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x186fbc: 0xc7818078  lwc1        $f1, -0x7F88($gp)
    ctx->pc = 0x186fbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x186fc0: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x186fc0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x186fc4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x186fc4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x186fc8: 0x0  nop
    ctx->pc = 0x186fc8u;
    // NOP
    // 0x186fcc: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x186fccu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x186fd0: 0x0  nop
    ctx->pc = 0x186fd0u;
    // NOP
    // 0x186fd4: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x186fd4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x186fd8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x186fd8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x186fdc: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x186FDCu;
    {
        const bool branch_taken_0x186fdc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x186fdc) {
            ctx->pc = 0x186FF4u;
            goto label_186ff4;
        }
    }
    ctx->pc = 0x186FE4u;
    // 0x186fe4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x186fe4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x186fe8: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x186fe8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x186fec: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x186FECu;
    {
        const bool branch_taken_0x186fec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186FECu;
        // 0x186ff0: 0xac4411e8  sw          $a0, 0x11E8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4584), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186fec) {
            ctx->pc = 0x187010u;
            goto label_187010;
        }
    }
    ctx->pc = 0x186FF4u;
label_186ff4:
    // 0x186ff4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x186ff4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x186ff8: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x186ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x186ffc: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x186ffcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x187000: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x187000u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x187004: 0x0  nop
    ctx->pc = 0x187004u;
    // NOP
    // 0x187008: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x187008u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x18700c: 0xac4411e8  sw          $a0, 0x11E8($v0)
    ctx->pc = 0x18700cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4584), GPR_U32(ctx, 4));
label_187010:
    // 0x187010: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x187010u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x187014: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x187014u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x187018: 0x3e00008  jr          $ra
    ctx->pc = 0x187018u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18701Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187018u;
        // 0x18701c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x187018u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x187020u;
}
