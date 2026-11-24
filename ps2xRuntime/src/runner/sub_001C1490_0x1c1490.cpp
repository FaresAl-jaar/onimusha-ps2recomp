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

// Function: sub_001C1490
// Address: 0x1c1490 - 0x1c153c
void sub_001C1490_0x1c1490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C1490_0x1c1490");
#endif

    switch (ctx->pc) {
        case 0x1c14c0u: goto label_1c14c0;
        default: break;
    }

    ctx->pc = 0x1c1490u;

    // 0x1c1490: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c1490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c1494: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x1c1494u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x1c1498: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c1498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c149c: 0x2442f510  addiu       $v0, $v0, -0xAF0
    ctx->pc = 0x1c149cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964496));
    // 0x1c14a0: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x1c14a0u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x40F510u));
    // 0x1c14a4: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1c14a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1c14a8: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x1c14a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x1c14ac: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1c14acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c14b0: 0x24a56b60  addiu       $a1, $a1, 0x6B60
    ctx->pc = 0x1c14b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27488));
    // 0x1c14b4: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x1c14b4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x1c14b8: 0xc041442  jal         func_105108
    ctx->pc = 0x1C14B8u;
    SET_GPR_U32(ctx, 31, 0x1C14C0u);
    ctx->pc = 0x1C14BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C14B8u;
    // 0x1c14bc: 0xe7ac0018  swc1        $f12, 0x18($sp) (Delay Slot)
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x1C14B8u, 0x1C14C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C14C0u;
label_1c14c0:
    // 0x1c14c0: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x1c14c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c14c4: 0xc7a1001c  lwc1        $f1, 0x1C($sp)
    ctx->pc = 0x1c14c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c14c8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1c14c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c14cc: 0x0  nop
    ctx->pc = 0x1c14ccu;
    // NOP
    // 0x1c14d0: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x1c14d0u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x1c14d4: 0x0  nop
    ctx->pc = 0x1c14d4u;
    // NOP
    // 0x1c14d8: 0x0  nop
    ctx->pc = 0x1c14d8u;
    // NOP
    // 0x1c14dc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1c14dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c14e0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1C14E0u;
    {
        const bool branch_taken_0x1c14e0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c14e0) {
            ctx->pc = 0x1C14F0u;
            goto label_1c14f0;
        }
    }
    ctx->pc = 0x1C14E8u;
    // 0x1c14e8: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x1c14e8u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x1c14ec: 0x0  nop
    ctx->pc = 0x1c14ecu;
    // NOP
label_1c14f0:
    // 0x1c14f0: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1c14f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x1c14f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c14f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c14f8: 0x0  nop
    ctx->pc = 0x1c14f8u;
    // NOP
    // 0x1c14fc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1c14fcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c1500: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x1C1500u;
    {
        const bool branch_taken_0x1c1500 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c1500) {
            ctx->pc = 0x1C1518u;
            goto label_1c1518;
        }
    }
    ctx->pc = 0x1C1508u;
    // 0x1c1508: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1c1508u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1c150c: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x1c150cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1c1510: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1C1510u;
    {
        const bool branch_taken_0x1c1510 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1510u;
        // 0x1c1514: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1510) {
            ctx->pc = 0x1C1534u;
            goto label_1c1534;
        }
    }
    ctx->pc = 0x1C1518u;
label_1c1518:
    // 0x1c1518: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1c1518u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1c151c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1c151cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1c1520: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1c1520u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1c1524: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x1c1524u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1c1528: 0x0  nop
    ctx->pc = 0x1c1528u;
    // NOP
    // 0x1c152c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1c152cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1c1530: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c1530u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c1534:
    // 0x1c1534: 0x3e00008  jr          $ra
    ctx->pc = 0x1C1534u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C1538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1534u;
        // 0x1c1538: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C1534u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C153Cu;
}
