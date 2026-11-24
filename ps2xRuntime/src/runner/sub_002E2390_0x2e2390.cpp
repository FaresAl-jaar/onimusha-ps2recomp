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

// Function: sub_002E2390
// Address: 0x2e2390 - 0x2e245c
void sub_002E2390_0x2e2390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E2390_0x2e2390");
#endif

    switch (ctx->pc) {
        case 0x2e2438u: goto label_2e2438;
        default: break;
    }

    ctx->pc = 0x2e2390u;

    // 0x2e2390: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2e2390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2e2394: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e2394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e2398: 0x8f838ab0  lw          $v1, -0x7550($gp)
    ctx->pc = 0x2e2398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937264)));
    // 0x2e239c: 0x1060002c  beqz        $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x2E239Cu;
    {
        const bool branch_taken_0x2e239c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e239c) {
            ctx->pc = 0x2E2450u;
            goto label_2e2450;
        }
    }
    ctx->pc = 0x2E23A4u;
    // 0x2e23a4: 0x10800026  beqz        $a0, . + 4 + (0x26 << 2)
    ctx->pc = 0x2E23A4u;
    {
        const bool branch_taken_0x2e23a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e23a4) {
            ctx->pc = 0x2E2440u;
            goto label_2e2440;
        }
    }
    ctx->pc = 0x2E23ACu;
    // 0x2e23ac: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E23ACu;
    {
        const bool branch_taken_0x2e23ac = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x2E23B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E23ACu;
        // 0x2e23b0: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e23ac) {
            ctx->pc = 0x2E23C0u;
            goto label_2e23c0;
        }
    }
    ctx->pc = 0x2E23B4u;
    // 0x2e23b4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2e23b4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e23b8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2E23B8u;
    {
        const bool branch_taken_0x2e23b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E23BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E23B8u;
        // 0x2e23bc: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e23b8) {
            ctx->pc = 0x2E23D8u;
            goto label_2e23d8;
        }
    }
    ctx->pc = 0x2E23C0u;
label_2e23c0:
    // 0x2e23c0: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x2e23c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x2e23c4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2e23c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2e23c8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2e23c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e23cc: 0x0  nop
    ctx->pc = 0x2e23ccu;
    // NOP
    // 0x2e23d0: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x2e23d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x2e23d4: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x2e23d4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_2e23d8:
    // 0x2e23d8: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x2e23d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e23dc: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x2e23dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x2e23e0: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x2e23e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x2e23e4: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x2e23e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x2e23e8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2e23e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e23ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e23ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e23f0: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x2e23f0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x2e23f4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2e23f4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2e23f8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2e23f8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e23fc: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2E23FCu;
    {
        const bool branch_taken_0x2e23fc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e23fc) {
            ctx->pc = 0x2E2414u;
            goto label_2e2414;
        }
    }
    ctx->pc = 0x2E2404u;
    // 0x2e2404: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2e2404u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2e2408: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x2e2408u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x2e240c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2E240Cu;
    {
        const bool branch_taken_0x2e240c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E240Cu;
        // 0x2e2410: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e240c) {
            ctx->pc = 0x2E2430u;
            goto label_2e2430;
        }
    }
    ctx->pc = 0x2E2414u;
label_2e2414:
    // 0x2e2414: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2e2414u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2e2418: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2e2418u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2e241c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2e241cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2e2420: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x2e2420u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x2e2424: 0x0  nop
    ctx->pc = 0x2e2424u;
    // NOP
    // 0x2e2428: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x2e2428u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x2e242c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2e242cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e2430:
    // 0x2e2430: 0xc096974  jal         func_25A5D0
    ctx->pc = 0x2E2430u;
    SET_GPR_U32(ctx, 31, 0x2E2438u);
    ctx->pc = 0x25A5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5D0u, 0x2E2430u, 0x2E2438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2438u;
label_2e2438:
    // 0x2e2438: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2E2438u;
    {
        const bool branch_taken_0x2e2438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E243Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2438u;
        // 0x2e243c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2438) {
            ctx->pc = 0x2E2448u;
            goto label_2e2448;
        }
    }
    ctx->pc = 0x2E2440u;
label_2e2440:
    // 0x2e2440: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e2440u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2444: 0x0  nop
    ctx->pc = 0x2e2444u;
    // NOP
label_2e2448:
    // 0x2e2448: 0x8f838ab0  lw          $v1, -0x7550($gp)
    ctx->pc = 0x2e2448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937264)));
    // 0x2e244c: 0xac6406b4  sw          $a0, 0x6B4($v1)
    ctx->pc = 0x2e244cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1716), GPR_U32(ctx, 4));
label_2e2450:
    // 0x2e2450: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e2450u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e2454: 0x3e00008  jr          $ra
    ctx->pc = 0x2E2454u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E2458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2454u;
        // 0x2e2458: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E2454u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E245Cu;
}
